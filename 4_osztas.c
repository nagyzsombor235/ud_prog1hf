#include <stdio.h>

int main()
{
int n=0;
printf("Adj meg egy számot\n");
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    if (i%4==0)
    {
        printf("%d\n", i);
    }
    
}

}