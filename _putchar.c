#include <unistd.h>
#include "holberton.h"
/**
 * _putchar - print char to stdout
 *@character: char to print
 *Return: char
 */
int _putchar(char character)
{
return (write(1, &character, 1));
}
/**
 * dont_found - print value and percent
 * @c: value
 * Return: 2 Always
 */
int dont_found(char ch)
{
  _putchar('%');
  _putchar(ch);

  return (2);
}
