#include <stdio.h>

int valid_triangle(int a,int b,int c)
{
    if (a && b && c > 0)
    {
        if (a+b > c && a+c>b && c+b>a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
    
}

int main()
{
    printf("%d\n",valid_triangle(10,1,2));
}