#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"


int _printf(const char *format)
{
  int i;
  char ch;

  for (i = 0; format[i] != '\0'; i++)
  {
    ch = format[i];
    if (ch == '%')
    {
      if (format[i + 1] == 'c')
      {
        printf("%s\n", "se detecto char");
      }
    }
  }
  return (i);
}
