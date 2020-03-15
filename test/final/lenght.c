#include "holberton.h"
/**
 * lenght - get lenght of string
 * @s: string to get lenght
 * Return: count of chars in string
 */
int lenght(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
