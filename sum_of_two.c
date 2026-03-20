#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int counter = 0;
    int a;
    int b;
    char text[100];
    printf("Adj meg pontosan két szmáot szóközzel elválasztva");
    fgets(text,100,stdin);
    for (int i = 0; i < 100; i++)
    {
        if (text[i] == '\0')
        {
            break;
        }
        else
        {
            if (text[i] == ' ')
            {
                counter += 1;
            }
        }
    }
        if (counter > 1 || counter < 1)
        {
            printf("Hiba! Pontosan két számot adj meg");
        }
        else
        {
            sscanf(text,"%d %d",&a, &b);
            printf("%d", a+b);
        }
        

}