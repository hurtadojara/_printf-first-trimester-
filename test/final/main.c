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

  // impresion comun
  _printf("Hello world!!\n");
  // imprimir strings
_printf("Nombre: %s \napellido: %s\n", nombre, apellido);
  //imprimir chars con strings
for (int a = 'a'; a <= 'z'; a++)
{
  _printf(" %s : %c \n", "Letra", a);

}
    // pruebas del main de holberton
  _printf("Character:[%c]\n", 'H');
  _printf("Character:[%c]\n", 'H');
  _printf("String:[%s]\n", "I am a string !");
  _printf("String:[%s]\n", "I am a string !");
  // imprimir numeros
  int len = 20393, len2 = 30293;
  _printf("Length:[%d, %d]\n", len, len);
    _printf("Length:[%d, %d]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    _printf("Negative:[%d]\n", -762534);
    _printf("%s\n", "andres");
  return (0);
}
