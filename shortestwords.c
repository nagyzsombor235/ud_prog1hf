#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Nem adtál meg egyetlen szót sem!\n");
        return 1;
    }
    int min = strlen(argv[1]);
    for (int i = 1; i < argc; i++)
    {
        int currentlength = strlen(argv[i]);
        if (currentlength < min)
        {
            min = currentlength;
        }
        
    }
    for (int i = 1; i < argc; i++)
    {
        int currentlength = strlen(argv[i]);
        if (currentlength == min)
        {
            printf("%s\n", argv[i]);
        }
        
    }
    
}