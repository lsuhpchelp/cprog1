#include <stdio.h>
#include <math.h>

#define ESP 0.0001
//http://en.wikipedia.org/wiki/Bisection_method
double func(double x) {
    return x*x*x - x -2;
}

int main()
{
    int i = 1;
    int max_iter=20;
    double esp=0.0001;
    double x0=1.0,x1=2.0,x2;
    double f1,f2,f0,t;
    printf("\niteration\t x0\tx1\tx2\tf0\tf1\tf2");
    do {
        x2=(x0+x1)/2;
        /*TODO: complete the function call f0, f1, f2*/
        printf("\n%3d %13.7f %13.7f %13.7f %13.7f %13.7f %13.7f", i, x0,x1,x2,f0,f1,f2);
        if(/*TODO: complete the condition*/) {
            x1=x2;
        }
        else {
            x0=x2;
        }
        i++;
    } while (/*TODO: complete the condition */);
    printf("\n\nApp.root = %f",x2);
    return 0;
}
