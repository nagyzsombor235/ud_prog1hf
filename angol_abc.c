#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 27

void char_fill(char c[])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (i == 26)
        {
            c[i] = '\0';
        }
        else
        {
        c[i] = (char)i+97;
        }
    }
    
}

int main()
{
    char text[27];
    char_fill(text);
    printf("%s\n",text);
}