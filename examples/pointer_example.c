#include <stdio.h>

int main() {
  /* In this first pointer example
  (a) we define a pointer variable
  (b) assign the address of a variable to a pointer
  (c) access the value at the address available in the pointer variable. 
  /*define two integer variables*/
  int a = 2, b = 3;
  /*define two pointer variables*/
  int *p1, *p2; 
  /*assign address of a to p1*/
  p1 = &a;
  /*assign address of b to p2*/
  p2 = &b;
  /*print the "address" and values of p1 and p2*/
  printf("%p %p \n", p1, p2);
  printf("%d %d \n", *p1, *p2);
  return 0;
}