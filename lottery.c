#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rng(int db, int floor, int ceiling,int numbers[])
{   
    int counter = 0;
    while (counter < db)
    {
        int a =rand() % (ceiling-floor+1) + floor;
        if (numbers[a] == 0)
        {
            numbers[a] = 1;
            counter++;
        }
    }
    
}

int main()
{
    char num[50];
    int min = 0;
    int max = 0;
    int length = 0;
    printf("How many numbers would you like to generate");
    fgets(num,50,stdin);
    length = atoi(num);

    printf("enter a minimum value for generation");
    fgets(num,50,stdin);
    min = atoi(num);

    printf("enter a maximum value for generation");
    fgets(num,50,stdin);
    max = atoi(num);
    if (max-min+1 < length)
    {
        printf("The given interval is not enough\n");
        return 0;
    }
    
    int generated[max+1];
    for (int i = 0; i <= max; i++)
    {
        generated[i] = 0;
    }
    
    rng(length,min,max,generated);
    printf("Ezek a generált számok:");
    for (int i = min; i <= max; i++)
    {
        if (generated[i] == 1)
        {
            printf(" %d", i);
        }
        
    }
    
}