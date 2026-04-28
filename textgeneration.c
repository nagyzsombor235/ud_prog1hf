#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char tmp[10];
    int lines = 0;
    int min = 0;
    int max = 0;
    printf("Hány sort szeretnél?");
    fgets(tmp,10,stdin);
    lines = atoi(tmp);
    printf("mi legyen a min hossz?");
    fgets(tmp,10,stdin);
    min = atoi(tmp),
    printf("Mennyi legyen a max hossz?");
    fgets(tmp,10,stdin);
    max = atoi(tmp);
    char insert = 'a';
    FILE *f;
    f = fopen("sorok.txt", "w");
    for (int i = 0; i < lines; i++)
    {
        int num = rand() % (max-min+1)+min;
        for (int i = 0; i < num; i++)
        {
            if(i != num-1)
            {
            insert = rand() % (126-32+1)+32;
            fprintf(f,"%c",insert);
            }
            else
            {
            insert = rand() % (126-32+1)+32;
            if(isalnum(insert) == 1)
            {
                fprintf(f,"%c",insert);
            }
            }
        }
        fprintf(f,"%c",'\n');
    }
    fclose(f);    
}