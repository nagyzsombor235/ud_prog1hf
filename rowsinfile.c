#define _POSIX_C_SOURCE 200809L
#include <stdlib.h>
#include <stdio.h>


int main(int argc,char *argv[])
{
    if (argc < 2)
    {
        printf("Hiba! adja meg egy szöveges állomány nenvét");
        return 1;
    }
    FILE *f = fopen(argv[1], "r");

    
    if (f == NULL)
    {
        printf("Hiba! a(z) %s nevű mappát nem sikerült megnyitni", argv[1]);

    }
    else
    {
    char *sor;
    int count = 0;
    ssize_t nread;
    size_t len = 0;
    while (nread = getline(&sor, &len, f) != -1)
    {
        count++;
    }
    printf("%d", count);
    }
    
}