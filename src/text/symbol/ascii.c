#include "..\..\inc\text\ascii.h"


/*
d_ascii_char_is_numeric
  Determines if a character is a numeric digit (0-9).

Parameter(s):
  _c: the character to test.
Return:
  true if the character is a numeric digit, false otherwise.
*/
D_STATIC_INLINE bool
d_ascii_char_is_numeric
(
	char _c
)
{
	return D_ASCII_IS_NUMERIC(_c);
}

/*
d_ascii_char_is_alphabetical
  Determines if a character is an alphabetical letter (A-Z or a-z).

Parameter(s):
  _c: the character to test.
Return:
  true if the character is alphabetical, false otherwise.
*/
D_STATIC_INLINE bool
d_ascii_char_is_alphabetical
(
	char _c
)
{
	return D_ASCII_IS_ALPHABETICAL(_c);
}

/*
d_ascii_char_is_alphanumeric
  Determines if a character is alphanumeric (A-Z, a-z, or 0-9).

Parameter(s):
  _c: the character to test.
Return:
  true if the character is alphanumeric, false otherwise.
*/
D_STATIC_INLINE bool
d_ascii_char_is_alphanumeric
(
	char _c
)
{
	return D_ASCII_IS_ALPHANUMERIC(_c);
}

/*
d_ascii_char_is_whitespace
  Determines if a character is a whitespace character (space, tab, newline,
carriage return, vertical tab, or form feed).

Parameter(s):
  _c: the character to test.
Return:
  true if the character is whitespace, false otherwise.
*/
D_STATIC_INLINE bool
d_ascii_char_is_whitespace
(
	char _c
)
{
	return D_ASCII_IS_WHITESPACE(_c);
}

/*
d_ascii_char_is_null
  Determines if a character is the null terminator.

Parameter(s):
  _c: the character to test.
Return:
  true if the character is null, false otherwise.
*/
D_STATIC_INLINE bool
d_ascii_char_is_null
(
	char _c
)
{
	return D_ASCII_IS_NULL(_c);
}

/*
d_ascii_char_is_control
  Determines if a character is a control character (0x00-0x1F or 0x7F). These
are non-printable characters used for device control.

Parameter(s):
  _c: the character to test.
Return:
  true if the character is a control character, false otherwise.
*/
D_STATIC_INLINE bool
d_ascii_char_is_control
(
	char _c
)
{
	return D_ASCII_IS_CONTROL(_c);
}

/*
d_ascii_char_is_printable
  Determines if a character is a printable character (0x20-0x7E).

Parameter(s):
  _c: the character to test.
Return:
  true if the character is printable, false otherwise.
*/
D_STATIC_INLINE bool
d_ascii_char_is_printable
(
	char _c
)
{
	return D_ASCII_IS_PRINTABLE(_c);
}

/*
d_ascii_char_is_punctuation
  Determines if a character is a punctuation or symbol character (printable but
not alphanumeric or whitespace).

Parameter(s):
  _c: the character to test.
Return:
  true if the character is punctuation, false otherwise.
*/
D_STATIC_INLINE bool
d_ascii_char_is_punctuation
(
	char _c
)
{
	return D_ASCII_IS_PUNCTUATION(_c);
}

/*
d_ascii_char_is_hex_digit
  Determines if a character is a hexadecimal digit (0-9, A-F, or a-f).

Parameter(s):
  _c: the character to test.
Return:
  true if the character is a hexadecimal digit, false otherwise.
*/
D_STATIC_INLINE bool
d_ascii_char_is_hex_digit
(
	char _c
)
{
	return D_ASCII_IS_HEX_DIGIT(_c);
}

/*
d_ascii_char_to_upper
  Converts a lowercase letter to uppercase; leaves other characters unchanged.

Parameter(s):
  _c: the character to convert.
Return:
  The uppercase version of the character if it was lowercase, otherwise the
original character.
*/
D_STATIC_INLINE char
d_ascii_char_to_upper
(
	char _c
)
{
	return D_ASCII_TO_UPPER(_c);
}

/*
d_ascii_char_to_lower
  Converts an uppercase letter to lowercase; leaves other characters unchanged.

Parameter(s):
  _c: the character to convert.
Return:
  The lowercase version of the character if it was uppercase, otherwise the
original character.
*/
D_STATIC_INLINE char
d_ascii_char_to_lower
(
	char _c
)
{
	return D_ASCII_TO_LOWER(_c);
}
