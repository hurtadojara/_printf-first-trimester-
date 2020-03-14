#include <limits.h>

#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  char *nombre = "Andres";
  char *apellido = "Tobon";
  char z = 'z';

  // impresion comun
  _printf("Hello world!!\n");
  // imprimir strings
_printf("Nombre: %s \napellido: %s\n", nombre, apellido);
  //imprimir chars con strings
for (int a = 'a'; a <= 'z'; a++)
{
  _printf(" %s : %c \n", "Letra", a);
}
    return (0);
}
