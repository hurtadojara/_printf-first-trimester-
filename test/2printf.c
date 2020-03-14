#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

int get_lenght(char *s)
{
  int i = 0;

  while (s[i] != '\0')
  {
    i++;
  }
  return (i);
}

int _printf(const char *format, ...)
{
  int len = (format != NULL) ? get_lenght(format) : NULL;
  return (len);
}
