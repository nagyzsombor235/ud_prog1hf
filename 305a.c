#include <stdio.h>

int rendezett(int t[],int n)
{
    if(n!=0)
    {
    for (int i = 1; i < n; i++)
    {
        if(t[i] < t[i-1])
        return 0;
    }
    }
    return 1;
}

int main()
{
    int tomb[2]={0,1};
    printf("%d", rendezett(tomb,0));
}