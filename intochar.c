#include "holberton.h"
#include <stdlib.h>
/**
 * intochar - convert int to string
 * @n: int to convert
 * Return: string
 */
char *intochar(int n)
{
	char *s;
	int i, j = n;
	int signo = n;

	if (n < 0)
	n = -n;
	i = 0;
	while (j != 0)
	{
		j = j / 10;
		i++;
	}
	s = malloc(i * sizeof(int));
	i = 0;
	while (n != 0)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	if (signo < 0)
	{
		s[i] = '-';
		i++;
		s[i] = '\0';
	}
	else
	s[i] = '\0';

	return (rev_array(s));
}
