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

void validator(char ch, ...)
{
  va_list arg2;
  int x;
  char *temp;
  char temp2;

  va_start(arg2, ch);
  if (ch == 's')
  {
    temp = va_arg(arg2, char *);
    for (x = 0; x < lenght(temp); x++)
    {
      _putchar(temp[x]);
    }
  }
  else if (ch == 'c')
  {
    temp2 = va_arg(arg2, int);
    _putchar(temp2);
  }
}

int _printf(const char *format, ...)
{
  int i, x, final_len = 0;
  char ch, temp;
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
        final_len += lenght(str);
        validator(format[i], va_arg(arg, char *));
        i++;
      }
      if (format[i] == 'c')
      {
        final_len += 1;
        validator(format[i], va_arg(arg, int));
        i++;
      }
    }
    final_len += i;
    _putchar(format[i]);
  }
  return (final_len);
}
