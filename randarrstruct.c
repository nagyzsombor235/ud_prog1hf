#include <stdio.h>
#include <stdlib.h>

typedef struct arraydata
{
    int lowest;
    int highest;
    float avarage;
} arraydata;

void fill(int array[])
{
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % (99-10) +10;
    } 
}
struct arraydata data1;
void analyzer(int array[], const int range)
{
    int sum = 0;
    int min = array[0];
    int max = array[0];
    for (int i = 0; i < range; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        else if (array[i] > min)
        {
            max = array[i];
        }
        sum += array[i];
    }
    float avg = sum/range;
    data1.lowest = min;
    data1.highest = max;
    data1.avarage = avg;
}

int main()
{
    int array[10];
    fill(array);
    analyzer(array,10);
    printf("A legkisebb elem:%d,a legnagyobb elem:%d, a tömb átlaga:%lf\n", data1.lowest, data1.highest, data1.avarage);
}