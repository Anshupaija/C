#include<stdio.h>
int main()
{
    int esum=0,osum=0;
    for (int i = 1; i <=20; i++)
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
    
    if (osum>esum)
    {
        printf("%d",osum-esum);
    }
    else if(esum>osum)
    {
        printf("%d",esum-osum);
    }
    else{
        printf("Zero(0)");
    }
    
    return 0;
}