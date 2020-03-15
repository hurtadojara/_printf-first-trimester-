#include "holberton.h"

char *rev_array(char *s)
{
   char r[(lenght (s))];
   int begin, end, count = 0;

   while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';
   return (r);
}
