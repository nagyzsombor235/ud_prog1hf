#define _POSIX_C_SOURCE 200809L
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f = fopen("input1.txt", "r");
    if (f == NULL)
    {
        printf("Hiba\n");
        return 1;
    }
    else
    {
        printf("input1.txt sikeresen megnyitva\n");
        char *sor;
        size_t len = 0;
        ssize_t getback = 0;
        int count = 0;
        printf("0.5-nél nagyobb elemek szűrése\n");
        FILE *out = fopen("out.txt", "a");
        if (out == NULL)
        {
            printf("Hiba\n");
            return 1;
        }
        else
        {
        while (getback = getline(&sor, &len, f) !=-1)
        {
            if (atof(sor) > 0.5)
            {
            fprintf(out,"%s",sor);
            count +=1;
            }
        }
        fclose(out);
        printf("out.txt bezárva\n");
        printf("out.txt-be kiírt számok mennyisége: %d db\n", count);

        
    }
    
}
}