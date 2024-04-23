#include <stdio.h>
void checknum(int num);
int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d\n", &num);
    printf("%d",num);
    checknum(num);
    
    return 0;
}

void checknum(int num)
{
    if (num > 0){
        printf("Number is Positive");
    }
    else if (num == 0){
        printf("Number is 0");
    }
    else{
        printf("Number is Negative");
    }
}
