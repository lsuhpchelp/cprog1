#include <stdio.h>
/* define LENGTH using the macro */
#define LENGTH 5   
int main()
{
   /*define WIDTH using const */
   const int  WIDTH  = 3;
   const char NEWLINE = '\n';
   int area = LENGTH * WIDTH;
   
   printf("value of area : %d", area);
   printf("%c", NEWLINE);

   return 0;
}
