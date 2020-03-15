#include "holberton.h"
char *intochar(int n)
{
char *s;
int i, j;
int signo = n;
/* Si es negativo cambiarlo a positivo */
if (n < 0)
 n = -n;

	i = 0;
	while ( n != 0)
	 {
			s[i] = n %10 + ‘0’;  // convertimos las cifras en su ASCII
			n= n /10;
			i++;
	 }

	 if(signo < 0)
	 {
		 s[i]=’-‘;
		 i++;
		 s[i]= '\0';
	 }
	 else
		 s[i]= '\0';

rev_array(s);
