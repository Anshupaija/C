#include<stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i==5 || i==1 || i==2 || i==4)
        {
            continue;
        }
        else
        {
            printf("%d\n",i);
        }
        
    }
    
}