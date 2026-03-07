#include <stdio.h>

int ind(int t[],int n,int p)
{
    for (int i = 0; i < n; i++)
    {
        if (t[i] == p)
        {
            return i;
        }
    }
    return -1;
    
}

int main()
{
    int tomb[7]={0,1,2,3,4,5,6};
    printf("%d",ind(tomb,7,9));
}