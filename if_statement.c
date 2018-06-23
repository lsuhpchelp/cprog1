#include <stdio.h>
 
int main ()
{
   /* local variable definition */
   int a = 100;
 
   /* check the boolean condition */
   if( a == 10 ) {
       printf("Value of a is 10\n" );
   }
   else if( a == 20 ) {
       printf("Value of a is 20\n" );
   }
   else {
       /* if none of the conditions is true */
       printf("None of the values is matching\n" );
   }
   printf("Exact value of a is: %d\n", a );
 
   return 0;
}
