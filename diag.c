#include <stdio.h>
#include <stdlib.h>

void fill(int n, int m,int array[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j] = rand() % 10;
        }
    }
}

void diag(int n,int array[n][n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",array[i][n-i-1]);
    }
    
}

int main()
{
    int array[6][6];
    fill(6,6,array);
    diag(6,array);
}