#include <stdio.h>
int main() {
    int index[5]={5, 4, 6, 3, 1};
    int a=3;
    /* undefined behavior */
    printf("%d\n",index[5]);
}
