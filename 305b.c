#include <stdio.h>

int min(int t[],int n)
{
    int min = 1000000000;
    for (int i = 0; i < n; i++)
    {
        if (t[i] < min)
        {
            min = t[i];
        }
        
        return min;
    }
    
}

int max(int t[],int n)
{
    int max = -100000000;
    for (int i = 0; i < n; i++)
    {
        if (t[i] > max)
        {
            max = t[i];
        }
    }
    return max;
    
}


int main()
{
    int tomb[8]={1,1,2,3,4,5,6,7};
    printf("%d\n",min(tomb,8));
    printf("%d\n",max(tomb,8));
}
