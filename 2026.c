#include <stdio.h>

int main()
{
    int one = 'b'-'a';
    int two = one + one;
    int four = two * two;
    int sixteen = four * four;
    int twofiftysix = sixteen * sixteen;
    int thousandtwentyfour = twofiftysix * four;
    int fiveonetwo = thousandtwentyfour / two;
    int twentytwentysix = thousandtwentyfour + fiveonetwo  + twofiftysix * two - sixteen - four - two;
    printf("%d",twentytwentysix);
}