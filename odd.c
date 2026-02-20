#include <stdio.h>

int main()

{
    int n =0;
    printf("Adj meg egy számot\n");
    scanf("%d", &n);
    while (n != 0)
    {
        if (n%2 !=0)
        {
            printf("%d\n",n);
        }
        n--;
    }


}