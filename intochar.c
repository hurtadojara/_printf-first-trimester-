#include "holberton.h"
#include <stdlib.h>
/**
 * _abs - computes the absolute value of a integer
 * @n: integer number to compute
 * Return: (int) absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n *= -1);
	}
	else
	{
		return (n);
	}
}
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
		s[i] = (_abs(n % 10) + '0');
		n = n / 10;
		i++;
	}
	if (signo < 0)
	{
		s[i] = '-';
	}

	return (rev_array(s));
}
