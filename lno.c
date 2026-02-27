#include <stdio.h>

int osztas(int a)
{
    int vissz = 0;
    if (a<2)
    {
        printf("önmaga az egyedülő osztó");
    }
    else
    {   
        for (int i = a-1; i >= 1 ; i--)
        {
            int maradek = a%i;
            if (maradek == 0)
            {
                vissz=i;
                break;
            }
        }   
    }
    return vissz;
}


int main()
{
    for (int i = 0; i <= 50; i++)
        {
        int b=osztas(i);
        printf("%d-nek a legnagyob osztója:%d\n",i, b);
        }
}