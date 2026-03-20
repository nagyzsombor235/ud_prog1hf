#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printer(int szam_tomb[])
{
    int first_char = 1;
    printf("Ezek: ");
    for (int i = 0; i < 100; i++)
    {
        if (szam_tomb[i] == 1)
        {
            if (first_char != 1)
            {
                printf(", ");
            }
            printf("%d",i);
            first_char = 0;
            
        }
        
    }
    printf("\n");
    
}

int main()
{  
    int numbers[100] = {0};
    int number = -10;
    int unique_counter = 0;
    while (number != 0)
    {
        printf("Adj meg egy számot [1:99] zárt intervallumun, adj meg nullát,hogy kilépj: ");
        scanf("%d", &number);
        if (number < 1 || number > 99)
        {
            printf("1 és 99 között adj meg számokat\n");
        }
        else
        {
            if (numbers[number] != 1)
            {
            numbers[number] = 1;
            unique_counter += 1;
            }
        }
        

        
    }
    printf("%ddb kölünböző számot adtál meg\n",unique_counter);
    printer(numbers);


}