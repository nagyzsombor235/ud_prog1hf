#define PI 3.14
#include <stdio.h>
#include <math.h>
    int main() {
    int a = 0;
    int b=0;
    printf("Adj meg két számot");
    scanf("%d %d", &a, &b);
    int tegterulet = a*b;
    int tegkerulet = 2*(a+b);
    printf("a négyzet területe %d és a kerülete %d\n", tegterulet, tegkerulet);
    double korterulet = a*a*PI;
    double korkerulet = 2*a*PI;
    printf("A kör területe %f a kerülete pedig %f\n", korterulet, korkerulet);
    return 0;
    }