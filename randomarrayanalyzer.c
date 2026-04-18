#include <stdio.h>
#include <stdlib.h>

void fill(int array[])
{
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % (99-10) +10;
    } 
}

void analyzer(int array[], const int range, int *min, int *max, float *avg)
{
    int sum = 0;
    *min = array[0];
    *max = array[0];
    for (int i = 0; i < range; i++)
    {
        if (array[i] < *min)
        {
            *min = array[i];
        }
        else if (array[i] > *min)
        {
            *max = array[i];
        }
        sum += array[i];
    }
    *avg = sum/range;
}

int main()
{
    int mini = 0;
    int maxi = 0;
    float avgi = 0;
    int nums[10];
    fill(nums);
    analyzer(nums,10,&mini,&maxi,&avgi);
    printf("A legkisebb elem:%d, a leghnagyobb elem:%d, és a tömb átlaga%lf\n", mini, maxi, avgi);
}