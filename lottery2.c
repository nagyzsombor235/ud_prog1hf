#include <stdio.h>
#include <stdlib.h>

void fill(int arr[], int max, int min, int generate)
{
    int range = max-min+1;
    for (int i = 0; i < range; i++)
    {
        arr[i] = 0;
    }
    
    for (int i = 0; i < generate; i++)
    {
        int num = rand() % (max-min+1) + min;
        if (arr[num-min] == 0)
        {
            arr[num-min] = 1;
        }

    }   
}

int main()
{
    int min1 = 0;
    int max1 = 0;
    int generate1 = 0;
    char tmp[5];
    printf("how many numbers would you like to generate");
    fgets(tmp,5,stdin);
    generate1 = atoi(tmp);
    printf("what would you like to be the floor of the generation");
    fgets(tmp,5,stdin);
    min1 = atoi(tmp);
    printf("what would you like to be the ceiling of the generation");
    fgets(tmp,5,stdin);
    max1 = atoi(tmp);
    int range = max1-min1+1;
    int array[range];
    fill(array,max1,min1,generate1);
    for (int i = 0; i < range; i++)
    {
        if (array[i] == 1)
        {
            printf("%d\n",i+min1);
        }
        
    }
    
}