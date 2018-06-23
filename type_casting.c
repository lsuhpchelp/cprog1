#include <stdio.h>
main() {
   int a = 4, b = 3;
   float c;
   c =  a / b;
   /* make sure you are doing the right conversion */
   printf("c= %f\n", c );
   c =  b / a;
   printf("c= %f\n", c );
   c = (float)a / b;
   printf("c= %f\n", c );
}