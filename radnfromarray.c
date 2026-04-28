#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int choice(int length, int array[])
{
    int chosen = array[rand() % length];
    return chosen;
}

int main()
{
    int numbers[10] = {0,1,2,3,4,5,6,7,8,9};
    srand(time(NULL));
    int a =choice(10,numbers);
    printf("%d", a);

}