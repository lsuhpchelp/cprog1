#include <stdio.h>
/* interchangeability between char and int */
int main() { 
    char a=120; /* ascii value for 'x' is 120 */
    int  b='y'; /* ascii value for 'y' is 121 */
    printf("%c,%c\n",a,b); 
    printf("%d,%d\n",a,b);
    printf("a-b=%d\n",a-b);
    return 0; 
} 
