#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int hossz;
    printf("Hány darab számot szeretnél bevinni");
    scanf("%d", &hossz);
    int tomb[hossz];

    for (int i = 0; i < hossz; i++)
    {
        int data = 0;
        printf("%d. szám",i+1);
        scanf("%d", &data);
        tomb[i] = data;
    }
    int tomb_copy[hossz];
    for (int i = 0; i < hossz; i++)
    {
        if (tomb[i] < 0)
        {
            tomb_copy[i] = tomb[i]*(-1);
        }
        else
        {
        tomb_copy[i] = tomb[i];
        }
    }
    printf("A bevitt számok abszolút értékei:");
    for (int i = 0; i < hossz; i++)
    {
        if (i == hossz-1)
        {
            printf("%d\n", tomb_copy[i]);
        }
        else
        {
        printf("%d,", tomb_copy[i]);
        }
    }
        printf("A megadott számok:");
    for (int i = 0; i < hossz; i++)
    {
        if (i == hossz-1)
        {
            printf("%d\n", tomb[i]);
        }
        else
        {
        printf("%d,", tomb[i]);
        }
    }
    
    
}