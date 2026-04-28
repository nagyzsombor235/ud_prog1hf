#include <stdio.h>
#include <stdlib.h>

void shuffle(int length, int numbers[])
{
    for (int i = 0; i < length; i++)
    {
        int tmp = numbers[i];
        int random = rand() % length;
        numbers[i] = numbers[random];
        numbers[random] = tmp;
    }
}

int main()
{
    int n = 10;
    int szamok[10] = {0,1,2,3,4,5,6,7,8,9};
    shuffle(10,szamok);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", szamok[i]);
    }
    

}