#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int counter_inside = 0;
    int counter_outside = 0;
    int word_count = 0;
    char words[100];
    int i = 0;
    printf("Adj meg szavakat '*' végjelig\n");
    while(1)
    {
        i = 0;
        counter_inside = 0;
        printf("Szó:");
        fgets(words,sizeof(words),stdin);
        if(strcmp(words, "*\n") == 0)
        {
            break;
        }
        word_count += 1;
        while (words[i] != '\n')
        {
            counter_inside +=1;
            i++;
        }
        if (counter_inside > counter_outside)
        {
            counter_outside = counter_inside;
        }
        
    }
    printf("%d db szót adtál meg. A leghoszabb szó %d karakterből áll", word_count, counter_outside);
        
}