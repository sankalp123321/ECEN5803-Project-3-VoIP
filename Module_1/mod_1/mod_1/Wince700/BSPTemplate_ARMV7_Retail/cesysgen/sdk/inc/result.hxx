//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
#ifndef RESULT_H__
#define RESULT_H__

//  result<T>   is a class that provides the ability to return result values from
//              functions without the need to use "output parameters."
//
//  Functions which return HRESULT error codes don't have the ability to return the result
//  value through the return parameter.  For such functions result values have to be returned
//  through output parameters.
//
//  result<T> class allows to return both the HRESULT error code and the function result value
//  through the same return value eliminating the need for output parameters.
//  result<T> is efficient and lightweight.  The code using it produces equivalent
//  (and sometimes better) machine code than the code using output parameters.
//
//  Usage:
//
//  // 1. Declare a function returning HKEY and HRESULT error code:
//
//  using namespace ce;                     // <<< result<T> lives in the "ce" namespace
//  result<HKEY> GetMyKey();
//
//  // 2. Implement the function returning HRESULT on error and HKEY value on success:
//
//  result<HKEY> GetMyKey()
//  {
//      HKEY key = NULL;
//      LONG lr = RegOpenKeyEx(..., &key);
//
//      if (lr == ERROR_SUCCESS)
//      {
//          return key;                     // <<< initialize return value with (S_OK, key) pair
//      }
//      else
//      {
//          return HRESULT_FROM_WIN32(lr);  // <<< initialize return value with error HRESULT
//                                          //     HKEY part is left uninitialized (not even default-constructed)
//      }
//  }
//
//  // 3. Use the function returning return<T>:
//
//  result<HKEY> key = GetMyKey();          // <<< NRVO or RVO usually kicks in and optimizes the copy-contruction
//
//  if (key)                                // <<< check if key contains a valid value (HRESULT part is S_OK)
//                                          //     !key works as expected too,
//                                          //     as well as the idiomatic C-style check:
//                                          //     if (result<HKEY> key = GetMyKey()) {...}
//  {
//      // key is good, use it
//      CloseKey(*key);                     // <<< operator* retrieves the value from result<T>
//  }
//  else
//  {
//      return key.error();                 // <<< report the error
//  }
//
//  // 4. Use result<> for functions without the return value
//
//  result<> Foo()                          // <<< result<> is a shortcut for result<void>
//                                          //     operator* is undefined for result<>
//  {
//      // do something
//      ...
//      if (we have failed)
//      {
//          return E_FAIL;
//      }
//
//      return S_OK;
//  }
//
//  // 5. Use make_value()/make_error() functions to construct the result<T> object with T==long
//
//  result<long> Bar()
//  {
//      long val;
//      ...
//      if (we have failed)
//      {
//          return make_error(E_FAIL);
//      }
//
//      return make_value(val);             // <<< "return res;" produces "ambiguios constructor" error
//                                          //     because HRESULT type is also "long"
//  }
//
//  // 6. Use ERETURN to return from a function early when something fails
//
//  result<MyClass> Foo()
//  {
//      result<HKEY> key = GetMyKey();
//      ERETURN(key);                       // <<< if GetMyKey fails, return now
//
//      // use *key to initialize MyClass
//      return MyClass(*key);
//  }
//
//  // 7. Use ERETURNHR instead of ERETURN when you have an existing function that return HRESULT error code
//
//  result<MyClass> Foo()
//  {
//      HKEY key;
//      HRESULT hr = GetMyKeyHR(&key);
//      ERETURNHR(hr);                      // <<< if GetMyKey fails, return now
//
//      // use key to initialize MyClass
//      return MyClass(key);
//  }
//

#include <windows.h>
#include <cassert>
#include <algorithm>
#include <detail/aligned_storage.hxx>

namespace ce
{
    namespace detail
    {
        // definitions for the type of error codes
        typedef HRESULT error_t;
        enum { error_success = S_OK, error_failure = E_FAIL };
        inline bool is_error_success(error_t err)
        {
            return err == error_success;  // or SUCCEEDED(err) if you want to support S_FALSE
        }

        // needed to disambiguate the result<T> constructor when error_t and T are the same type
        class result_value_tag {};
        class result_error_tag {};
    }

    template <typename T = void>
    class result
    {
    public:
        typedef T               value_type;
        typedef detail::error_t error_type;

    public:
        result()
            : error_(detail::error_failure)
        {
#if defined(DEBUG) && defined(CE_RESULT_ASSERT_ON_FAILURE)
            assert(false);
#endif
        }

        result(detail::error_t err, detail::result_error_tag = detail::result_error_tag())
            : error_(err)
        {
            if (detail::is_error_success(error_))
            {
                assert(!detail::is_error_success(error_));

                // since the "value" part of this object doesn't get constructed here
                // we need to prevent the accidental use of the value by forcefully setting
                // the error code to failure
                error_ = detail::error_failure;
            }

#if defined(DEBUG) && defined(CE_RESULT_ASSERT_ON_FAILURE)
            assert(false);
#endif
        }

        result(T const & val, detail::result_value_tag = detail::result_value_tag())
            : error_(detail::error_success)
        {
            construct(val);
        }

        result(result const & other)
            : error_(other.error_)
        {
            if (other)
            {
                construct(*other);
            }
        }

        result & operator=(result const & other)
        {
            if (other)
            {
                if (*this)
                {
                    assign_value(*other);
                }
                else
                {
                    construct(*other);
                }
            }
            else
            {
                destruct();
            }

            error_ = other.error_;
            return *this;
        }

        ~result()
        {
            destruct();
        }

        detail::error_t error() const
        {
            assert(!detail::is_error_success(error_));
            return error_;
        }

        T & operator*()
        {
            assert(detail::is_error_success(error_));
            return storage_.ref();
        }

        T const & operator*() const
        {
            assert(detail::is_error_success(error_));
            return storage_.ref();
        }

        T * operator->()
        {
            assert(detail::is_error_success(error_));
            return storage_.ptr();
        }

        T const * operator->() const
        {
            assert(detail::is_error_success(error_));
            return storage_.ptr();
        }

        // operator safe bool
        typedef detail::error_t result::*unspecified_bool_type;

        operator unspecified_bool_type() const
        {
            return detail::is_error_success(error_) ? &result::error_ : 0;
        }

    private:
        void destruct()
        {
            if (*this)
            {
                storage_.ptr()->~T();
            }
        }

        void construct(T const & val)
        {
            new (storage_.address()) T(val);
        }

        void assign_value(T const & val)
        {
            this->operator *() = val;
        }

    private:
        detail::error_t             error_;
        detail::aligned_storage<T>  storage_;
    };

    // specialization for just the error code without the actual result value
    template <>
    class result<void>
    {
    public:
        typedef void            value_type;
        typedef detail::error_t error_type;

    public:
        result()
            : error_(detail::error_failure)
        {
#if defined(DEBUG) && defined(CE_RESULT_ASSERT_ON_FAILURE)
            assert(false);
#endif
        }

        result(detail::error_t err)
            : error_(err)
        {
#if defined(DEBUG) && defined(CE_RESULT_ASSERT_ON_FAILURE)
            if (!detail::is_error_success(error_))
            {
                assert(false);
            }
#endif
        }

        result(result const & other)
            : error_(other.error_)
        {}

        result & operator=(result const & other)
        {
            error_ = other.error_;
            return *this;
        }

        ~result()
        {}

        void swap(result & other)
        {
            std::swap(error_, other.error_);
        }

        detail::error_t error() const
        {
            return error_;
        }

        // operator safe bool
        typedef detail::error_t result::*unspecified_bool_type;

        operator unspecified_bool_type() const
        {
            return detail::is_error_success(error_) ? &result::error_ : 0;
        }

    private:
        detail::error_t             error_;
    };

    // specialization for bool, because the general template result<> is too error prone with bool
    template <>
    class result<bool>
    {
    public:
        typedef bool            value_type;
        typedef detail::error_t error_type;

    public:
        result()
            : error_(detail::error_failure)
        {
#if defined(DEBUG) && defined(CE_RESULT_ASSERT_ON_FAILURE)
            assert(false);
#endif
        }

        result(detail::error_t err, detail::result_error_tag = detail::result_error_tag())
            : error_(err)
        {
            if (detail::is_error_success(error_))
            {
                assert(!detail::is_error_success(error_));

                // since the "value" part of this object doesn't get constructed here
                // we need to prevent the accidental use of the value by forcefully setting
                // the error code to failure
                error_ = detail::error_failure;
            }

#if defined(DEBUG) && defined(CE_RESULT_ASSERT_ON_FAILURE)
            assert(false);
#endif
        }

        result(bool const & val, detail::result_value_tag = detail::result_value_tag())
            : error_(detail::error_success)
        {
            construct(val);
        }

        result(result const & other)
            : error_(other.error_)
        {
            if (other.valid())
            {
                construct(*other);
            }
        }

        result & operator=(result const & other)
        {
            if (other.valid())
            {
                if (valid())
                {
                    assign_value(*other);
                }
                else
                {
                    construct(*other);
                }
            }
            else
            {
                destruct();
            }

            error_ = other.error_;
            return *this;
        }

        ~result()
        {
            destruct();
        }

        detail::error_t error() const
        {
            assert(!detail::is_error_success(error_));
            return error_;
        }

        bool & operator*()
        {
            assert(detail::is_error_success(error_));
            return storage_.ref();
        }

        bool const & operator*() const
        {
            assert(detail::is_error_success(error_));
            return storage_.ref();
        }

        // operator safe bool is substituted for valid() function
        // because it's too error prone to use
        bool valid() const
        {
            return detail::is_error_success(error_);
        }

    private:
        void destruct()
        {}

        void construct(bool const & val)
        {
            new (storage_.address()) bool(val);
        }

        void assign_value(bool const & val)
        {
            this->operator *() = val;
        }

    private:
        detail::error_t                 error_;
        detail::aligned_storage<bool>   storage_;
    };

    // make result<T> value when T and error_t have the same type
    template <typename T>
    inline
    result<T> make_value(T const & val)
    {
        return result<T>(val, detail::result_value_tag());
    }

    inline
    result<detail::error_t> make_error(detail::error_t err)
    {
        return result<detail::error_t>(err, detail::result_error_tag());
    }

    template <typename T>
    inline
    bool valid(result<T> const & val)
    {
        return bool(val);
    }

    template <>
    inline
    bool valid(result<bool> const & val)
    {
        return val.valid();
    }
}

//  ERETURN - a useful macro to bail out of the function if the result<T> contains the error code
//
//  res:    pass result<T> to this parameter
//
#define ERETURN(res)                \
    do                              \
    {                               \
        if (!valid(res))            \
        {                           \
            return (res).error();   \
        }                           \
    } while (0, 0)                  \

//  ERETURNHR - a useful macro to bail out of the function if the HRESULT contains the error code
//
//  hr:     HRESULT parameter
//
#define ERETURNHR(hr)               \
    do                              \
    {                               \
        HRESULT hrEval = (hr);      \
        if (FAILED(hrEval))         \
        {                           \
            return hrEval;          \
        }                           \
    } while (0, 0)                  \


#endif
