#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char character)
{
return (write(1, &character, 1));
}

int lenght(char *s)
{
  int i = 0;

  while (s[i])
    i++;

  return (i);
}

int _printf(const char *format, ...)
{
  int i, x, index = 0;
  char ch;
  va_list arg;
  char *str;
  va_start(arg, format);

  for (i = 0; format[i] != '\0'; i++)
  {
    ch = format[i];
    if (ch == '%')
    {
      i++;
      if (format[i] == 's')
      {
        index = format[i + 1];
        str = va_arg(arg, char *);
        for (x = 0; x < lenght(str); x++)
        {
          _putchar(str[x]);
        }
        i++;
      }
    }

    _putchar(format[i]);
  }
  return (i);
}
