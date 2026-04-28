#define _POSIX_C_SOURCE 200809L
#include <stdlib.h>
#include <stdio.h>
#include<string.h>


int main()
{
char *sor;
size_t len;
ssize_t read;
FILE *f;
int count = 0;
int index = 0;
int longchar = 0;
f = fopen("sorok.txt", "r");
while (read = getline(&sor,&len,f) != -1)
{
    count++;
    if (strlen(sor) > longchar)
    {
    longchar = strlen(sor);
    index = count;
    }
}
fclose(f);
printf("%d-%d",longchar,index);
}
