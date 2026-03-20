#include <stdio.h>
#include <string.h>

int textlength(char array[])
{
    int len =strlen(array);
    return len;
}

int appear(char array[],int length,char Searched_item)
{
    int last_appearance = -1;
    for (int  i = 0; i < length; i++)
    {
        if (array[i] == Searched_item)
        {
            last_appearance = i;
        }
        
    }
    if (last_appearance < 0)
    {
        return -1;
    }
    else
    {
        return last_appearance;
    }
    
    
}

int main()
{
    char szoveg[1000] = "asdaaaaaaa";
    int len = textlength(szoveg);
    printf("%d",appear(szoveg,len,'a'));
}
