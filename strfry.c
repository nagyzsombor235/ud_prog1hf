#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void my_strfry(char *line)
{
    for (int i = 0; i < strlen(line)-1; i++)
    {
        int j = rand()% (strlen(line)-1);
        char tmp = line[i];
        line[i] = line[j];
        line[j] = tmp; 
    }
    
}

int main()
{
    char *line;
    size_t len = 0;
    printf("Mi legyen a szöveg? :  ");
    getline(&line, &len,stdin);
    
    my_strfry(line);
    printf("%s", line);
}