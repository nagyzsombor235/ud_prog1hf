#include <stdio.h>

int skyscraper(int t[],int hossz)
{
    int diff = 0;
    for (int i = 1; i < hossz; i++)
    {
        if(t[i]-t[i-1] >= 0)
        {
            diff = diff+(t[i]-t[i-1]);
        }
        if(t[i]-t[i-1] < 0)
        {
            diff = diff+(-1*(t[i]-t[i-1]));
        }
    }
    return diff;
    
}

int main()
{
    int tomb[38]={0,1,2,3,4,5,18,7,5,1,2,3,5,7,5,4,3,5,6,7,8,4,32,3,4,5,6,7,8,9,7,42,6,34,5,6,7,8};
    printf("%d",skyscraper(tomb,38));
}