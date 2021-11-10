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
#pragma once


namespace dataconversion
{
    template<typename T> 
    class digits
    {
        //
        //  Calculate the max number of decimal digits a type can represent.
        //  A straightforward method is (log10(_UI64_MAX) + 1). But we want
        //  the calculation to resolve to a compile-time constant, so we
        //  use an algorithm based on the size of the data type.
        //
        //  Using the algebra law for the log of a power, we get:
        //      log10(type_max) --> log10(2^n) --> n * log10(2)
        //          ...where n = number of bits in the type
        //          ...and log10(2) can be approximated as the constant 0.301
        //
    private:
        static const size_t dividend    = 301;
        static const size_t divisor     = 1000;
        static const size_t bits        = CHAR_BIT * sizeof(T);

    public:
        static const size_t maxBase10 = ((bits * dividend) / divisor) + 1;
    };


    namespace details
    {
        //
        //  parse_ui64:
        //
        //      - generic integer parse serves as base for many type specific routines
        //
        bool parse_ui64(const wchar_t* parsestr, unsigned __int64& parseval)
        {
            ASSERT(NULL != parsestr);

            if (L'\0' == parsestr[0])
                {
                parseval = 0;
                return true;
                }

            wchar_t*        parsestop = NULL;
            size_t          parselen  = wcsnlen(parsestr, digits<unsigned __int64>::maxBase10);
            int             parsebase = 10;

            //
            //  parse string is larger than expected
            //
            if (0 == parselen)
                {
                return false;
                }
            else if ((2 < parselen) &&
                (L'0' == parsestr[0]) &&
                ((L'x' == parsestr[1]) || (L'X' == parsestr[1])))
                {
                parsebase = 16;
                }

            unsigned __int64 val = _wcstoui64(parsestr, &parsestop, parsebase);

            if ((parsestop == parsestr) ||
                ((parsestop - parsestr) > digits<unsigned __int64>::maxBase10) ||
                (L'\0' != parsestop[0]))
                {
                return false;
                }

            parseval = val;
            return true;
        }
    }


    //
    //  parse:
    //  
    //      - parses the specified wchar string into byte values
    //      - parses the empty string as 0 by default
    //      - supports parsing only base-10, and base-16 numbers
    //      - error checks the conversion and returns true on success, false on error
    //
    FORCEINLINE
    bool parse(const wchar_t* parsestr, signed char& parseval)
    {
        __int64 val = 0;
        
        if ((false == details::parse_ui64(parsestr, (unsigned __int64&) val)) ||
            (SCHAR_MIN > val) ||
            (SCHAR_MAX < val))
        {
            return false;
        }

        parseval = (signed char) val;
        return true;
    }
    FORCEINLINE
    bool parse(const wchar_t* parsestr, unsigned char& parseval)
    {
        unsigned __int64 val = 0;
        
        if ((false == details::parse_ui64(parsestr, val)) ||
            (UCHAR_MAX < val))
        {
            return false;
        }

        parseval = (signed char) val;
        return true;
    }


    //
    //  parse:
    //  
    //      - parses the specified wchar string into word values
    //      - parses the empty string as 0 by default
    //      - supports parsing only base-10, and base-16 numbers
    //      - error checks the conversion and returns true on success, false on error
    //
    FORCEINLINE
    bool parse(const wchar_t* parsestr, signed short& parseval)
    {
        __int64 val = 0;
        
        if ((false == details::parse_ui64(parsestr, (unsigned __int64&) val)) ||
            (SHRT_MIN > val) ||
            (SHRT_MAX < val))
        {
            return false;
        }

        parseval = (signed short) val;
        return true;
    }
    FORCEINLINE
    bool parse(const wchar_t* parsestr, unsigned short& parseval)
    {
        unsigned __int64 val = 0;
        
        if ((false == details::parse_ui64(parsestr, val)) ||
            (USHRT_MAX < val))
        {
            return false;
        }

        parseval = (unsigned short) val;
        return true;
    }


    //
    //  parse:
    //  
    //      - parses the specified wchar string into double word values
    //      - parses the empty string as 0 by default
    //      - supports parsing only base-10, and base-16 numbers
    //      - error checks the conversion and returns true on success, false on error
    //
    FORCEINLINE
    bool parse(const wchar_t* parsestr, signed long& parseval)
    {
        __int64 val = 0;
        
        if ((false == details::parse_ui64(parsestr, (unsigned __int64&) val)) ||
            (LONG_MIN > val) ||
            (LONG_MAX < val))
            {
            return false;
            }

        parseval = (signed long) val;
        return true;
    }
    FORCEINLINE
    bool parse(const wchar_t* parsestr, unsigned long& parseval)
    {
        unsigned __int64 val = 0;
        
        if ((false == details::parse_ui64(parsestr, val)) ||
            (ULONG_MAX < val))
            {
            return false;
            }

        parseval = (unsigned long) val;
        return true;
    }
    FORCEINLINE
    bool parse(const wchar_t* parsestr, signed int& parseval)
    {
        return parse(parsestr, (signed long&) parseval);
    }
    FORCEINLINE
    bool parse(const wchar_t* parsestr, unsigned int& parseval)
    {
        return parse(parsestr, (unsigned long&) parseval);
    }


    //
    //  parse:
    //  
    //      - parses the specified wchar string into quad word values
    //      - parses the empty string as 0 by default
    //      - supports parsing only base-10, and base-16 numbers
    //      - error checks the conversion and returns true on success, false on error
    //
    FORCEINLINE
    bool parse(const wchar_t* parsestr, signed __int64& parseval)
    {
        __int64 val = 0;

        if ((false == details::parse_ui64(parsestr, (unsigned __int64&) val)) ||
            (_I64_MIN > val))
            {
            return false;
            }

        parseval = (signed __int64) val;
        return true;
    }
    FORCEINLINE
    bool parse(const wchar_t* parsestr, unsigned __int64& parseval)
    {
        return details::parse_ui64(parsestr, parseval);
    }
}
