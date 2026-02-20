# include <stdio.h>

int main()
{
    int n=0;
    printf("Adj meg egy számot\n");
    scanf("%d", &n);
    printf("1");
    for (int i = 2; i <= n; i++)
    {
        printf(" --> %d", i);
    }
    printf("\n");
       
}