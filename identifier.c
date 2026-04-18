#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char word[100];
    printf("Adj meg szringeket * végjelig\n");
    do
    {
        printf("\n");
        printf("Input: ");
        int check = 0;
        fgets(word,100,stdin);
        if (strcmp(word, "*\n") == 0)
        {
            break;
        }
        
        if ((word[0] >= 48 && word[0] <= 57) || strlen(word) == 1)
        {
            check = 1;
        }
        for (int i = 0; i < strlen(word)-1; i++)
        {
            if ((word[i] >= 65 && word[i] <= 90) || (word[i] >= 97 && word[i] <= 122) || (word[i] == 95) || (word[i] >= 48 && word[i] <= 57))
            {}
            else
            {check = 1;continue;}
        }
        if (check == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    } while (strcmp(word, "*\n") != 0);
    
}