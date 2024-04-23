#include <stdio.h>

int sumOfNaturalNumbers(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int sum = sumOfNaturalNumbers(n);
    printf("The sum of all natural numbers up to %d is: %d\n", n, sum);

    return 0;
}

int sumOfNaturalNumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
