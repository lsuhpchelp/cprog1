#include <stdio.h>
 
int main () {
   /* local variable definition */
   int a = 0;

   /* while loop execution */
   while( a < 10 ) {
      if( a > 5) {
         /* terminate the loop using break statement */
         break;
      }
      if (a==3) {
          a++;
          /* terminate the current iteration using continue statement */
          continue;
      }
      printf("value of a: %d\n", a);
      a++;
   }

   return 0;
}