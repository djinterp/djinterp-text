#include "..\..\inc\text\symbol\emoji.h"


size_t
d_emoji_utf8_encode
(
    uint32_t _cp,
    char*    _out
)
{
    if (_cp <= 0x7Fu)
    {
        _out[0] = (char)_cp;

        return 1;
    }
    else if (_cp <= 0x7FFu)
    {
        _out[0] = (char)(0xC0u | (_cp >> 6));
        _out[1] = (char)(0x80u | (_cp & 0x3Fu));

        return 2;
    }
    // disallow UTF-16 surrogate range
    else if (_cp >= 0xD800u && _cp <= 0xDFFFu)
    {
        return 0;
    }
    else if (_cp <= 0xFFFFu)
    {
        _out[0] = (char)(0xE0u | (_cp >> 12));
        _out[1] = (char)(0x80u | ((_cp >> 6) & 0x3Fu));
        _out[2] = (char)(0x80u | (_cp & 0x3Fu));

        return 3;
    }
    else if (_cp <= 0x10FFFFu)
    {
        _out[0] = (char)(0xF0u | (_cp >> 18));
        _out[1] = (char)(0x80u | ((_cp >> 12) & 0x3Fu));
        _out[2] = (char)(0x80u | ((_cp >> 6) & 0x3Fu));
        _out[3] = (char)(0x80u | (_cp & 0x3Fu));

        return 4;
    }

    return 0; // invalid code point
}

D_STATIC_INLINE const char*
d_emoji_utf8
(
    uint32_t _cp
)
{
#if defined(__STDC_NO_THREADS__)
    static char buf[5];
#else
    static _Thread_local char buf[5];
#endif

    size_t n = emoji_utf8_encode(_cp, buf);
    buf[n] = '\0';
    
    return buf;
}

/* Encode a sequence of code points (for ZWJ/VS16/flags, etc.) to thread-local buffer. */
D_STATIC_INLINE const char*
d_emoji_utf8_seq
(
    const uint32_t* _cps,
    size_t          _len
)
{
#if defined(__STDC_NO_THREADS__)
    static char buf[64];
#else
    static _Thread_local char buf[64];
#endif

    size_t pos = 0;

    for (size_t i = 0; i < _len; ++i)
    {
        char tmp[4];
        size_t n = emoji_utf8_encode(_cps[i], tmp);

        if (n == 0 || pos + n >= sizeof(buf))
        { 
            break; 
        }

        d_memcpy(buf + pos, tmp, n);

        pos += n;
    }

    buf[pos] = '\0';

    return buf;
}
