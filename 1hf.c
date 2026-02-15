#include <stdio.h>
#include <math.h>

    int main() {
    int a = 0;
    int b=0;
    printf("Adj meg a téglalap oldalainak a hosszát");
    scanf("%d %d", &a, &b);
    int tegterulet = a*b;
    int tegkerulet = 2*(a+b);
    printf("a négyzet területe %d és a kerülete %d\n", tegterulet, tegkerulet);
    printf("Adja meg a kör sugarát");
    float korsugar = 0; 
    scanf("%f", &korsugar);
    double korterulet = pow(korsugar, 2)*M_PI;
    double korkerulet = 2*korsugar*M_PI;
    printf("A kör területe %f a kerülete pedig %f\n", korterulet, korkerulet);
    return 0;
    }