#include <stdio.h>
#include <string.h>
 
/* define a structure point */
struct Point { 
    int index;
    char tag;
    double x;
    double y;
};

void print_point(struct Point point);

int main() {
  /* define two struct Point variables */
  struct Point p1, p2;
  /* assign values to struct members of p1 */
  p1.index=0;
  p1.tag = 'a';
  p1.x = 0.0;
  p1.y = 0.0;
  /* assign values to struct members of p2 */
  p2.index=1;
  p2.tag = 'b';
  p2.x = 1.0;
  p2.y = 1.0;
  /* output p1 and p2 */
  print_point(p1);
  print_point(p2);
}

void print_point(struct Point point)
{
   printf( "\n point %c:\n", point.tag);
   printf( "\tindex : %d\n", point.index);
   printf( "\tx = %7.2lf\n", point.x);
   printf( "\ty = %7.2lf\n", point.y);
   printf( "\n" );
}

