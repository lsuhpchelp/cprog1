#include <stdio.h>

int main (void) {
  printf("I am in stdout\n");
  fprintf(stdout, "I am also in stdout\n");
  fprintf(stderr, "I am in stderr\n");
  return 0;
}