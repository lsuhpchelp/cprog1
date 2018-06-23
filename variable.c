/* variable.c */
#include <stdio.h>

int main() {
  int i = 3;
  int j = 4;
  int x, y;
  int kronecker_delta;
  float a = 4.5;
  double b = 5.25;
  double sum;
  
  x=1, y=2, x = (x, y);
  /* 1. calculate the kronecker_delta using ?= */
  kronecker_delta = (i==j)?1:0;
  /* 2. calculate the sum of a and b */
  sum = a+b;

  printf("x= %d, y= %d\n", x, y);
  printf("i/j= %d\n", i/j);
  printf("j/i= %d\n", j/i);
  printf("kronecker_delta= %d\n", kronecker_delta);
  printf("a+b= %f\n", sum);
  
  return 0;
}
