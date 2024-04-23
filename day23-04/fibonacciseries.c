#include <stdio.h>

void printFibonacciSeries(int n);
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d", &n);
    printFibonacciSeries(n);
}
void printFibonacciSeries(int n)
{
     int f = 0, s = 1, result;
    for (int i = 0; i < n; i++)
    {
        printf("%d", f);
        result = f + s;
        f = s;
        s = result;
    }
}
