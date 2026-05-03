#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strcmpi(char *s1, char *s2)
{
    if (strlen(s1) == strlen(s2))
    {
        for (int i = 0; i < strlen(s1); i++)
        {
            if (s1[i] == s2[i] || s1[i] == tolower(s2[i]) || tolower(s1[i]) == s2[i]){}
            else{return 0;}
        }
    }
    else{return 0;}
    return 1;
}

int main()
{
    char *s1 = "ASD";
    char *s2 = "asd";
    printf("%d", strcmpi(s1,s2));
}