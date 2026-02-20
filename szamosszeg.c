#include <stdio.h>

int main() 
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum+i;
    }
    printf("az első 1000 szám összege %d\n", sum);

}