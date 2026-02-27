#include <stdio.h>

int fib(int a)
{
    int b = 0;
    int vissz = 0;
    int c = 1;
    for (int i = 0; i < a; i++)
    {
        vissz = b+c;
        b=c;
        c=vissz;
    }
    return vissz;
}
int main()

{
    for (int i = 0; i <= 100; i++)
    {
        int fibonacci = fib(i);
        printf("%d\n", fibonacci);
    }
    
}
