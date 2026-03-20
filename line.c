#include <stdio.h>

void line(char character, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c", character);
    }
    
}

int main()
{
    line('-',50);
}