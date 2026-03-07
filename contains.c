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
    int arraysize = 0;
    printf("Milyen nagy legyne a tömb mérete?");
    scanf("%d",&arraysize);
    int tomb[arraysize];
    for (int i = 0; i < arraysize; i++)
    {
        printf("Mennyi legye a tömb %d. eleme",i);
        scanf("%d",&tomb[i]);
    }
    printf("%d",contains(tomb,8,9));
}