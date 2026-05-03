#include <stdlib.h>
#include <stdio.h>

int main()
{
    int doors[600];
    for (int i = 1; i < 601; i++)
    {
        doors[i] = 1;
    }
    for (int i = 1; i < 601; i++)
    {
        for (int j = 1; j < 601; j++)
        {
            if (i%j == 0)
            {doors[i] = 1-doors[i];}
        }
    }
    for (int i = 0; i < 601; i++)
    {
        if(doors[i] == 0)
        {printf("%d\n",i);}
    }
    
    
    
}