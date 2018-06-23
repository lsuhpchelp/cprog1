#include <stdio.h>
#include <math.h>

#define N 5

int main() {
  int i;
  double a=2.0;
  double x[N];
 double y[N];
 
  /* initialize x[i]=1, y[i]=2 */
  for (i = 0; i < N; i++){
    x[i] = 1.0;
    y[i] = 2.0;
  }

  /* Y=a*X + Y */
  for (i = 0; i < N; i++){
    y[i] = a*x[i] + y[i];
  }
 
  for (i = 0; i < N; i++){
    printf("%3.2f\n",y[i]);
  }
}
