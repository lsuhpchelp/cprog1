#include <stdio.h>
#include <string.h>
#define N 15

int main ()
{
   char str1[N] = "C program ";
   char str2[N] = "is great!";
   char str3[N];
   int  len;

   /* copy str1 into str3 */
   strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );

   /* concatenates str1 and str2 */
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );

   /* total length of str1 after concatenation */
   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );

   return 0;
}