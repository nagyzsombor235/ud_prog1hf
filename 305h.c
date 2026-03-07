#include <stdio.h>

void absolute(int t[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (0-t[i] > 0)
        {
            t[i] = 0-t[i];
        }
        
    }
    
}

void array_write(int t[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < n-1)
        {
            printf("%d,",t[i]);
        }
        else
        {
            printf("%d\n",t[i]);
        }
    }
    
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
    array_write(tomb,arraysize);
    absolute(tomb,arraysize);
    array_write(tomb,arraysize);
}