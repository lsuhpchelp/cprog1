/* printf example showing different specifier usage */
#include <stdio.h>

int main()
{
   printf ("Characters: %c %c \n", 'a', 65);
   printf ("Decimals: %d %4d\n", 2014, 65);
   printf ("floats: %7.5f \t%f \t%E \n", 3.1416, 3.1416, 3.1416);
   printf ("%s \n", "hello world");
   return 0;
}
