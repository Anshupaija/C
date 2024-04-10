#include <stdio.h>
int main()
{
    int floor;
    printf("Enter Floor No: ");
    scanf("%d", &floor);
    switch (floor)
    {
    case 1:
        printf("You reached 1st Floor!!!");
        break;
    case 2:
        printf("You reached 2nd Floor!!!");
        break;
    case 3:
        printf("You reached 3rd Floor!!!");
        break;
    case 4:
        printf("You reached 4th Floor!!!");
        break;
    case 5:
        printf("You reached 5th Floor!!!");
        break;
    case 6:
        printf("You reached 6th Floor!!!");
        break;
    case 7:
        printf("You reached 7th Floor!!!");
        break;
    case 8:
        printf("You reached 8th Floor!!!");
        break;
    case 9:
        printf("You reached 9th Floor!!!");
        break;
    case 10:
        printf("You reached 10th Floor!!!");
        break;

    default:
        printf("Your Floor Number is not valid------");
        break;
    }
    return 0;
}