#define _POSIX_C_SOURCE 200809L
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void quicksort(int a[], int bal, int jobb)
{
    int x, temp;
    int i, j;

    i = bal;
    j = jobb;
    x = a[(bal + jobb) / 2];
    while (i <= j)
    {
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            /* */
            ++i;
            --j;
        }
    }

    if (bal < j)  quicksort(a, bal, j);
    if (i < jobb) quicksort(a, i, jobb);
}

int main()
{
    FILE *f;
    f = fopen("millions.txt", "r");
    char *line = 0;
    size_t len;
    ssize_t read = 0;
    int count = 0;
    while (read = getline(&line, &len, f) != -1)
    {
        count+=1;
    }
    rewind(f);
    int *nums = malloc(count*sizeof(int));
    int index = 0;
    while (read = getline(&line, &len, f) != -1)
    {
        nums[index] = atoi(line);
        index++;
    }
    quicksort(nums,0,index-1);
    fclose(f);
    f = fopen("millionsout.txt", "w");
    for (int i = 0; i < index; i++)
    {
        fprintf(f,"%d\n", nums[i]);
    }
    free(nums);
    fclose(f);
    free(line);
    
}