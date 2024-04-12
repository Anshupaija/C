#include<stdio.h>
int main()
{
    int esum=0;
    int osum=0;

    for (int i = 1; i < 20; i++)
    {
        if (i%2==0)
        {
            esum+=i;
        }
        else
        {
            osum+=i;
        }
        
    }
    printf("Sum of even numbers:%d\n",esum);
    printf("Sum of odd numbers:%d\n",osum);
    
    return 0;
}