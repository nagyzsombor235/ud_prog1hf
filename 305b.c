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
    int arraysize = 0;
    printf("Milyen nagy legyne a tömb mérete?");
    scanf("%d",&arraysize);
    int tomb[arraysize];
    for (int i = 0; i < arraysize; i++)
    {
        printf("Mennyi legye a tömb %d. eleme",i);
        scanf("%d",&tomb[i]);
    }
    printf("%d\n",min(tomb,arraysize));
    printf("%d\n",max(tomb,arraysize));
}
