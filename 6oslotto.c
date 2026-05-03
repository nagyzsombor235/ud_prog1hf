#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 996300;
    int prime = 2;
    while (num != 1);
    {
        if (num%prime == 0)
        {
            printf("%d", prime);
            num = num/prime;
        }
        else
        {
            int is_prime = 1;
            int counter = 0;
            while (is_prime != 0)
            {
                prime +=1;
                for (int i = 0; i < prime; i++)
                {
                    if (prime%i == 0 && (i != prime || i !=1))
                    {
                        break;
                    }
                    else
                    {
                        is_prime = 0;
                    }
                }
                
            }
            
        }
    }
}