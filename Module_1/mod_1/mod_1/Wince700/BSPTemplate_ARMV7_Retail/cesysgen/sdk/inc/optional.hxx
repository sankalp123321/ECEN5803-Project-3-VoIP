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
#ifndef OPTIONAL__
#define OPTIONAL__

//  optional<T>   is a class that provides the ability to return optionally initialized values from a function
//
//  Normally if you want to return an optional value from a function you would
//  have to allocate an object on heap and return a pointer, or use something like
//  std::pair<bool, T> to return an optional value, where pair::first specifies whether the value is valid,
//  but with optional<T> those workarounds are not needed.
//
//  Advantages of optional<T> over the heap allocated object and pair<bool, T>:
//      1. It doesn't require T to have a default contstructor.  There is no overhead of calling
//         the default constructor of T is not called if the value of optional<T> is not initialized.
//      2. It has pointer semantics but still constructs the value on the stack avoiding a heap allocation.
//
//  Usage:
//
//  // 1. Declare a function returning optional HKEY value (instead of HKEY, T in optional<T> can be an arbitrarily complex class):
//
//  ce::optional<HKEY> GetMyKey();
//
//  // 2. Implement the function returning an HKEY value or nothing:
//
//  ce::optional<HKEY> GetMyKey()
//  {
//      HKEY key;
//      LONG lr = RegOpenKeyEx(..., &key);
//
//      if (lr == ERROR_SUCCESS)
//      {
//          return key;                     // <<< initialize return value with key
//      }
//      else
//      {
//          ce::none;                       // <<< use ce::none to return an uninitialized optional<T> value
//      }
//  }
//
//  // 3. Use the function returning optional<T>:
//
//  optional<HKEY> key = GetMyKey();        // <<< NRVO or RVO usually kicks in and optimizes the copy-contruction
//
//  if (key)                                // <<< check if key contains a valid value
//                                          //     !key works as expected too,
//                                          //     as well as the idiomatic C-style check:
//                                          //     if (optional<HKEY> key = GetMyKey()) {...}
//  {
//      // key is good, use it
//      CloseKey(*key);                     // <<< operator* retrieves the value from result<T>
//  }
//

#include <cassert>
#include <algorithm>
#include <detail/aligned_storage.hxx>

namespace ce
{
    namespace detail
    {
        struct none_helper {};
    }

    //  none helps initializing empty optional<> value
    //
    typedef detail::none_helper const * none_t;
    static none_t none = 0;


    template <typename T>
    class optional
    {
    public:
        typedef T   value_type;

    public:
        optional()
            : has_value_(false)
        {}

        optional(none_t)
            : has_value_(false)
        {}

        optional(T const & val)
            : has_value_(true)
        {
            construct(val);
        }

        optional(optional const & other)
            : has_value_(other.has_value_)
        {
            if (other)
            {
                construct(*other);
            }
        }

        optional & operator=(optional const & other)
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

            has_value_ = other.has_value_;
            return *this;
        }

        ~optional()
        {
            destruct();
        }

        T & operator*()
        {
            assert(has_value_);
            return storage_.ref();
        }

        T const & operator*() const
        {
            assert(has_value_);
            return storage_.ref();
        }

        T * operator->()
        {
            assert(has_value_);
            return storage_.ptr();
        }

        T const * operator->() const
        {
            assert(has_value_);
            return storage_.ptr();
        }

        // operator safe bool
        typedef bool optional::*unspecified_bool_type;

        operator unspecified_bool_type() const
        {
            return has_value_ ? &optional::has_value_ : 0;
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
        detail::aligned_storage<T>  storage_;
        bool                        has_value_;
    };


    template <typename T>
    inline
    bool valid(optional<T> const & val)
    {
        return bool(val);
    }
}

#endif // OPTIONAL__
