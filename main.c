#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  long int l = INT_MAX + 1024;
  
printf("%d", 1024);
_printf("%d", 1024);

printf("%d", -1024);
_printf("%d", -1024);

printf("%d", 0);
_printf("%d", 0);

  printf("%d", INT_MAX);
  _printf("%d", INT_MAX);

  printf("%d", INT_MIN);
  _printf("%d", INT_MIN);

  printf("%d", l); //where l is a long int equals to INT_MAX + 1024
  _printf("%d", l); //where l is a long int equals to INT_MAX + 1024

  printf("%d", l); //where l is a long int equals to INT_MIN - 1024
  _printf("%d", l); //where l is a long int equals to INT_MIN - 1024

  printf("There is %d bytes in %d KB\n", 1024, 1);
  _printf("There is %d bytes in %d KB\n", 1024, 1);

  printf("%d - %d = %d\n", 1024, 2048, -1024);
  _printf("%d - %d = %d\n", 1024, 2048, -1024);

  printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
  _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

  printf("%i", 1024);
  _printf("%i", 1024);

  printf("%i", -1024);
  _printf("%i", -1024);

  printf("%i", 0);
  _printf("%i", 0);

  printf("%i", INT_MAX);
  _printf("%i", INT_MAX);

  printf("%i", INT_MIN);
  _printf("%i", INT_MIN);

  printf("%i", l); //where l is a long int equals to INT_MAX + 1024
  _printf("%i", l); //where l is a long int equals to INT_MAX + 1024

  printf("%i", l); //where l is a long int equals to INT_MIN - 1024
  _printf("%i", l); //where l is a long int equals to INT_MIN - 1024

  printf("There is %i bytes in %i KB\n", 1024, 1);
  _printf("There is %i bytes in %i KB\n", 1024, 1);

  printf("%i - %i = %i\n", 1024, 2048, -1024);
  _printf("%i - %i = %i\n", 1024, 2048, -1024);

  printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
  _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

  printf("%d == %i\n", 1024, 1024);
  _printf("%d == %i\n", 1024, 1024);

   printf("iddi%diddiiddi\n", 1024);
   _printf("iddi%diddiiddi\n", 1024);

  printf("%d", 10000);
  _printf("%d", 10000);

   printf("%i", 10000);
   _printf("%i", 10000);
   return (0);
  }
