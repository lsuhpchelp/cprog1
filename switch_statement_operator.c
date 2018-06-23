#include <stdio.h>

main(){
    float x,y;
    char c;
    printf("input expression: x+(-,*,/)y \n");
    scanf("%f%c%f",&x,&c,&y);
    switch(c){
       case '+': printf("%f\n",x+y);break;
       case '-': printf("%f\n",x-y);break;
       case '*': printf("%f\n",x*y);break;
       case '/': printf("%f\n",x/y);break;
       default: printf("input error.\n");break;
    }
}
