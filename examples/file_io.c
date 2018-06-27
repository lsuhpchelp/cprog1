#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 255
int main() {

   int num_vec, i;
   float vx, vy, vz;
   float v_length[N];
   FILE *fp;
   
   /* open the "vector.in" in read mode */
   if ((fp=fopen("vector.in", "r"))==NULL) exit(1);
   fscanf(fp,"%d",&num_vec);
   if (num_vec>N) {
       fprintf(stderr, "out of bound error");
       exit(1);
   }
   for (i=0;i<num_vec;i++) {
       /* read the vectors */
       fscanf(fp,"%f %f %f",&vx,&vy,&vz);
       v_length[i]=sqrt(vx*vx+vy*vy+vz*vz);
   }
   fclose(fp);

   fp = fopen("vector.out", "w+");
   fprintf(fp,"%d\n",num_vec);
   for (i=0;i<num_vec;i++) {
       fprintf(fp,"%3d %lf\n", i, v_length[i]);
   }
   fclose(fp);
   return 0;
}