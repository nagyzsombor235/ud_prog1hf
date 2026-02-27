#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0;
    printf("Milyen magas legyen a lépcső?");
    scanf("%lf", &a);
    for (int i = 1; i <= a ; i++)
    {
        int x = a-i;
        int width = a*2+2-x;
        for (int j = 0; j < x ;j++)
        {
            printf(" ");
            width -= 1;
        }
            int leker = floor(width/2)+1;
            int felker = ceil(width/2);

        for (int n = 1;n <=width; n++)
        {
            if ((n != leker) && (n != felker))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }   
        }
        printf("\n");
    }
}