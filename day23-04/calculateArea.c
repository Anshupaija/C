#include <stdio.h>
float calculateArea(int choice);

int main()
{
    int shapeChoice;
    printf("Choose Shape to find Area\n ");
    printf("1.Circle\n");
    printf("2.Rectangle\n");
    printf("3.Square\n");
    scanf("%d", &shapeChoice);

    float area = calculateArea(shapeChoice);

    if (shapeChoice == 1 || shapeChoice == 2 || shapeChoice == 3)
    {
        printf("\nThe Area of selected shape is %f", area);
    }
    else
    {
        printf("Invalid Choice!!!!!");
    }

    return 0;
}

float calculateArea(int choice)
{
    float area;
    switch (choice)
    {
    case 1:
    {
        float r=0.0;
        printf("Enter the Radius of circle:");
        scanf("%f", &r);
        area = 3.14 * r * r;
        break;
    }

    case 2:
    {
        float length, width;
        printf("Enter Length & Width of rectangle:\n");
        printf("length:");
        scanf("%f", &length);
        printf("\nwidth:");
        scanf("%f", &width);
        area = length * width;
        break;
    }

    case 3:
    {
        float side;
        printf("Enter the side length of the square: ");
        scanf("%f", &side);
        area = side * side;
        break;
    }
    }
    return area;
}
