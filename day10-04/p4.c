#include <stdio.h>
int main()
{
    int num;
    printf("Enter Table No:");
    scanf("%d", &num);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d", num);
        printf(" X ");
        printf("%d", i);
        printf(" = ");
        printf("%d\n", num * i);
    }

    return 0;
}