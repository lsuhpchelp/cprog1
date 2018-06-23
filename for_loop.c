#include <stdio.h>
 
int main ()
{
   int i;
   /* for loop execution */
   for(i = 0; i < 5; i++ ) {
      printf("for loop i= %d\n", i);
   }
   
   i=0;
   /* while loop execution */
   while( i < 5 ) {
      printf("while loop i: %d\n", i);
      i+=1;
   }
   
   i=1;
   /* do-while loop execution */
   do {
       printf("do while loop i: %d\n", i);
       i=i+1;
   }while( i < 0 );
   
   return 0;
}
