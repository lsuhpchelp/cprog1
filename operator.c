#include <stdio.h>

main()
{
   int a = 31;
   int b = 10;
   int c ;
   printf("a=%d\nb=%d\n",a,b);
   c = a + b;
   printf("c = a + b : c is %d\n", c );
   c = a - b;      
   printf("c = a - b : c is %d\n", c );
   c = a * b;    
   printf("c = a * b : c is %d\n", c );
   c = a / b;     
   printf("c = a + b : c is %d\n", c );
   c = a % b;     
   printf("c = a %% b : c is %d\n", c );
   c = a++;      
   printf("c = a++   : c is %d\n", c );
   c = a--;      
   printf("c = a--   : c is %d\n", c );
   
   if( a == b ) {
      printf("a == b? - a is equal to b\n" );
   }
   else {
      printf("a == b? - a is not equal to b\n" );
   }
   if ( a < b ) {
      printf("a < b? - a is less than b\n" );
   }
   else {
      printf("a < b? - a is not less than b\n" );
   }
   if ( a > b ) {
      printf("a > b? - a is greater than b\n" );
   }
   else {
      printf("a > b? - a is not greater than b\n" );
   }
   /* Lets switch the value of a and b */
   int t;
   t=a,a=b,b=t;
   printf("a, b switched:\na=%d\nb=%d\n",a,b);
   if ( a <= b ) {
      printf("a <= b? - a is either less than or equal to  b\n" );
   }
   if ( b >= a ) {
      printf("a <= b? - b is either greater than  or equal to b\n" );
   }

}