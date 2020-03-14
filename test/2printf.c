#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"


int _printf(const char *format, ...)
{
  int i;
  char ch;
  va_list arg;

  va_start(arg, format);

  for (i = 0; format[i] != '\0'; i++)
  {
    ch = format[i];
    if (ch == '%')
    {
      switch (format[i + 1])
      {
        case 's':
        fprintf(stdout, va_arg(arg, char *));
      }
    }
    putchar((format[i] == '%' && format[i + 1] == 's') ? 0 : format[i]);
  }
  return (i);
}
