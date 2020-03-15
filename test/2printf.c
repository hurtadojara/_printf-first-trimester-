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

void process_format(const char *fmt, va_list arg)
{
	char ch;
	int i;

	for (i = 0; fmt[i] != '\0'; i++)
	{
		ch = fmt[i];
		if (ch == '%')
		{
			i++;
			if (fmt[i] == 's')
			{
				validator(fmt[i], va_arg(arg, char *));
				i++;
			}
			if (fmt[i] == 'c')
			{
				validator(fmt[i], va_arg(arg, int));
				i++;
			}
		}
		_putchar(fmt[i]);
}
}
int _printf(const char *format, ...)
{
	int final = 0;
	va_list arg;
	va_start(arg, format);
	process_format(format, arg);
	va_end(arg);
	return (final);
}
