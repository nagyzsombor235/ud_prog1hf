#define _POSIX_C_SOURCE 200809L
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcmpi(char *s1, char *s2)
{
    if (strlen(s1)-1 == strlen(s2))
    {
        for (int i = 0; i < strlen(s1)-1; i++)
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
    FILE *f;
    f = fopen("nevek.csv", "r");
    size_t len;
    char *line;
    __ssize_t read;
    char * nev;
    char *p;
    while(read = getline(&line,&len,f) !=-1)
    {
        p = strtok(line,",");
        nev = p;
        p = strtok(NULL, ",");
        p = strtok(NULL, ",");
        if (strcmpi(p, "mi") == 1)
        {printf("%s\n",nev);}
        
    }
}