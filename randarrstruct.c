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

arraydata data2(int array[], const int range)
{
    arraydata data1;
    int sum = 0;
    data1.lowest = array[0];
    data1.highest = array[0];
    for (int i = 0; i < range; i++)
    {
        if (array[i] < data1.lowest)
        {
            data1.lowest = array[i];
        }
        else if (array[i] > data1.highest)
        {
            data1.highest = array[i];
        }
        sum += array[i];
    }
    float avg = sum/range;
    data1.avarage = avg;
    return data1;
}

int main()
{
    int array[10];
    fill(array);
    arraydata data1 = data2(array,10);
    printf("A legkisebb elem:%d,a legnagyobb elem:%d, a tömb átlaga:%lf\n", data1.lowest, data1.highest, data1.avarage);
}