#include <stdio.h>
int main()
{
    int num;
    printf("Enter The Number:");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d FizzBuzz!!!\n", i);
        }
        else if (i % 3 == 0)
        {
            printf("%d Fizz!!!\n", i);
        }
        else if (i % 5 == 0)
        {
            printf("%d Buzz!!!\n", i);
        }
        else
        {
            printf("%d\n", i);
        }
    }
}