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
    int arraysize = 0;
    printf("Milyen nagy legyne a tömb mérete?");
    scanf("%d",&arraysize);
    int tomb[arraysize];
    for (int i = 0; i < arraysize; i++)
    {
        printf("Mennyi legye a tömb %d. eleme",i);
        scanf("%d",&tomb[i]);
    }
    printf("%d\n", rendezett(tomb,arraysize));
}