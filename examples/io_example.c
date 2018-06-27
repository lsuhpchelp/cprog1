/* io_example */
#include <stdio.h>

int main() {
   char str[100];
   int i;
   float a;
   double b;
   printf( "Enter string i(int) a(float) b(double):\n");
   /* 
   1. note the & sign (get the address of the variable) before i,a,b
   2. question, why there is no address sign before the str?
   3. note the %lf when reading double 
   */
   scanf("%s %d %f %lf", str, &i, &a, &b);
   printf( "\nYou entered: %s, %d, %f, %lf\n", str, i, a, b);
   return 0;
}
