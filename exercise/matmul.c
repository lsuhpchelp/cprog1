#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define nra 3
#define nca 3
#define ncb 3
             
int main() {
  int i,j,k;
  double a[nra][nca],b[nca][ncb],c[nra][ncb];
  double sum;
  char fmt_string[]="%5.1f ";

  for (i = 0; i < nra; i++){
    for (j = 0; j < nca; j++){
      a[i][j] = (double)(i+j);
    }
  }
  for (j = 0; j < nca; j++){
    for (k = 0; k < ncb; k++){
      b[j][k] = (double)(i*j);
    }
  }
  for (i = 0; i < nra; i++){
    for (k = 0; k < ncb; k++){
      c[i][k] = 0.0;
    }
  }
  
  /* TODO: complete the matrix multiplication here*/

  printf("\n A=\n");
  /* output A matrix*/
  for (i = 0; i < nra; i++){
      for (j = 0; j < nca; j++){
          printf(fmt_string, a[i][j]);
      }
      printf("\n");
  }
  printf("\n B=\n");
  
  /* output B matrix*/
  for (i = 0; i < nca; i++){
      for (j = 0; j < ncb; j++){
          printf(fmt_string, b[i][j]);
      }
      printf("\n");
  }
  
  printf("\n C=\n");
  /* output C matrix*/
  for (i = 0; i < nra; i++){
      for (j = 0; j < nca; j++){
          printf(fmt_string, c[i][j]);
      }
      printf("\n");
  }
}
