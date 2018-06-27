#include <stdio.h>
 
/* function declaration */
int max(int a, int b);
 
int main() {
   /* local variable definition */
   int a = 100, b = 200, ret;
    /* calling a function to get max value */
   ret = find_max(a, b);
   printf( "Max value is : %d\n", ret );
   return 0;
}
/* function returning the max between two numbers */
int find_max(int a, int b) {
   /* function body */
   int t;
   if (a > b) t = a;
   else t = b;
   /* rewrite the above using the ternary operator */
   /* t=(a>b)?a:b; */
   return t; 
}
