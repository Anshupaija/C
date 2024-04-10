#include <stdio.h>
int main()
{
    int num;
    printf("Enter Maximum Number:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
}