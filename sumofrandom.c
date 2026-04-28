#define _POSIX_C_SOURCE 200809L
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void replace(char text[], char from, char to)
{
    for (int i = 0; i < strlen(text); i++)
    {
        if(text[i] == from)
        {
            text[i] = to;
        }
    }
    
}

int main()
{
    FILE *f = fopen("input.txt", "r");
    if (f == NULL)
    {
        printf("Hiba");
        return 1;
    }
    else
    {
        char *sor;
        size_t len = 0;
        ssize_t getback = 0;
        long double sum = 0; 
        while (getback = getline(&sor, &len, f) !=-1)
        {
            replace(sor, ',' , '.');
            sum += atof(sor);
        }
        printf("%.20Lf", sum);
    }
    
}