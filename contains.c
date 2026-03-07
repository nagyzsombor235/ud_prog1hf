#include <stdio.h>

int contains(int t[],int n,int p)
{
    for (int i = 0; i < n; i++)
    {
        if(t[i]==p)
        return 1;
    }
    return 0;
}

int main()
{
    int tomb[8]={0,1,2,3,4,5,6,7};
    printf("%d",contains(tomb,8,9));
}