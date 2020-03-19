# printf
PRINTF PROYECT  FOR HOLBERTONN

NAME
       printf - format and print data

SYNOPSIS
#include <stdio.h>

int printf(const char *format, ...);

DESCRIPTION
Format of the format string

The format string is a character string, beginning and ending in its initial shift state, if any. The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character %, and ends with a conversion specifier. In between there may be (in this order) zero or more flags, an optional minimum field width, an optional precision and an optional length modifier.
The arguments must correspond properly (after type promotion) with the conversion specifier. By default, the arguments are used in the order given, where each '*' and each conversion specifier asks for the next argument (and it is an error if insufficiently many arguments are given). One can also specify explicitly which argument is taken, at each place where an argument is required, by writing "%m$" instead of '%' and "*m$" instead of '*', where the decimal integer m denotes the position in the argument list of the desired argument, indexed starting from 1. Thus,


The conversion specifier

A character that specifies the type of conversion to be applied. The conversion specifiers and their meanings are:
d, i
The int argument is converted to signed decimal notation. The precision, if any, gives the minimum number of digits that must appear; if the converted value requires fewer digits, it is padded on the left with zeros. The default precision is 1. When 0 is printed with an explicit precision 0, the output is empty.

c

If no l modifier is present, the int argument is converted to an unsigned char, and the resulting character is written. If an l modifier is present, the wint_t (wide character) argument is converted to a multibyte sequence by a call to the wcrtomb(3) function, with a conversion state starting in the initial state, and the resulting multibyte string is written.

s

If no l modifier is present: The const char * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to (but not including) a terminating null byte ('\0'); if a precision is specified, no more than the number specified are written. If a precision is given, no null byte need be present; if the precision is not specified, or is greater than the size of the array, the array must contain a terminating null byte.

Example

#include "holberton.h"
int main ()
{
  int age = 20;

_printf("my age is:%d\n", age);
}

output:

my age is:20

If truncation occurs in glibc versions prior to 2.0.6, this is treated as an error instead of being handled gracefully.

AUTHOR
       Camilo and Andres.

REPORTING BUGS
        at slack, Andres Hurtado Camilo Tobon.

GNU coreutils 8.28            march 2020                  printf(3)
