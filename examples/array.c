#include <stdio.h>
#define N 10

int main() {
  /* TODO: find the max, min, sum of the 10 values */
  double sum, max, min;
  int i=0;
  int a[N]={13, 14, 15, 16, 17, 16, 15, 14, 13, 11};

  sum=min=max=a[0];
  for (i=1;i<N;i++) {
    if (max<a[i]) max=a[i];
    if (min>a[i]) min=a[i];
    sum += a[i];
  }
  printf("The max value is: %f\n", max);
  printf("The min value is: %f\n", min);
  printf("The sum value is: %f\n", sum);
  return 0;
}
