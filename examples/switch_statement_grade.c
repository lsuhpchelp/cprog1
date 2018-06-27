/* switch_statement_grade.c */
#include <stdio.h>
int main (){
    /* local variable definition */
    char grade = 'A';
    /*printf("Please enter your grade:\n");
      scanf("%c",&grade);*/
    /* what is the expected output? */
    switch(grade) {
        case 'A' : printf("Excellent!\n" );
        case 'B' : printf("Well done\n" );
        case 'C' : printf("You passed\n" );
        case 'F' : printf("You failed\n" );
        default : printf("Invalid grade\n" );
    }
    printf("Your grade is  %c\n", grade );
    return 0;
}
