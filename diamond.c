#include <stdio.h>
#include <math.h>


int main()    
{
    int height =0;
    printf("Milyen magas legyen a gyémánt?");
    scanf("%d", &height);
    if (height%2 ==0)
    {
        printf("csak pozitív páratlan számok elfogdahatóak\n");
        return(1);
    }
    else
    {
        int downward = 1;
        int remain = height;
        for (int i = 0; i < height; i++)
        {
            remain -=1;
            if (i < (height/2)+1)
            {
                for (int j = 1; j < ceil(height/2.0)-i; j++)
                {
                    printf(" ");
                }

                for(int n=0; n < i*2+1;n++)
                {
                    printf("*");
                }
            }
            else if(i >= (height/2)+1)
            {
                for (int j = 0; j <downward;j++)
                {
                    printf(" ");
                }
            
                for (int n = 0; n < height-downward*2;n++)
                {
                    printf("*");
                }
                downward +=1;
            }
            printf("\n");
        }   
    }
}