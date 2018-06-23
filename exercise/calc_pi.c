#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
  int i;
  int n=100;
  double x, my_pi;
  double sum = 0.0;
  double step = 1.0/(double)n;

  /* complete the following loop */
  for (i = 0; i < n; i++) {
      /*TODO: complete your code here */ 
  }
  my_pi = step * sum;

  printf("my_pi = %17.15f\n", my_pi);
  printf("   PI = %17.15f\n", PI );
  printf("difference with actual value = %17.15f \%\n", my_pi-PI );
  return 0;
}

/*TODO: write a function calc_pi, 
  use the division number n as your parameter,
  then call your function from your main() function */
