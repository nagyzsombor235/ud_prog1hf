#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int num = rand() % 5+8;
    char password[12];
    char characters[66];
    for (int i = 0; i < 26; i++)
    {
        characters[i] = (char)(i+65);
    }
    for (int i = 26; i < 52; i++)
    {
        characters[i] = (char)(i-26+97);
    }
    for (int i = 56; i < 66; i++)
    {
        characters[i] = i-56+48;
    }
    characters[52] = '.';
    characters[53] = ',';
    characters[54] = ';';
    characters[55] = (char)39;
    for (int i = 0; i < 66; i++)
    {
        //printf("%c\n",characters[i]);
    }
    
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            int num = rand() % (51-26+1)+26;
            //printf("%d-%c\n", num, characters[num]);
            password[i] = characters[num];
            //printf("%c\n", password[i]);
            
        }
        if (i == 1)
        {
            int num = rand() % rand() % 25;
            //printf("%d-%c\n", num,characters[num]);
            password[i] = characters[num];
        }
        if (i == 2)
        {
            int num = rand() % (65-56+1)+56;
            //printf("%d-%c\n", num,characters[num]);
            password[i] = characters[num];
        }
        if (i == 3)
        {
            int num = rand() %(55-52+1)+52;
            //printf("%d-%c\n", num,characters[num]);
            password[i] = characters[num];
        }
        else if (i>=4)
        {
            password[i] = characters[rand() % 65];
        }
        
    }
    for (int i = 0; i < num; i++)
    {
        printf("%c", password[i]);
    }
    
}