#include <stdio.h>

int is_even(int n)
{
    if (n%2==0)
    {
        return 1;
    }
    else
    return 0; 
}


int is_odd(int n)
{
    if (n%2==1)
    {
        return 1;
    }
    else
    return 0;
}

int is_odd2(int n)
{
    if (is_even(n)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
    

int main()
{
    printf("%d\n",is_even(1));
    printf("%d\n",is_odd(1));
    printf("%d\n",is_odd2(2));
}