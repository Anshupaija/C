#include <stdio.h>
int main()
{
        // Outer loop for rows
        for (int i = 1; i <= 4; i++)
        {
            // Inner loop for columns
            for (int j = 1; j <= 4; j++)
            {
                // Print stars for the first and last rows
                // or for the first and last columns
                if (i == 1 || i == 4 || j == 1 || j == 4)
                {
                    printf("* ");
                }
                else
                {
                    printf("  "); // Print spaces for the hollow part
                }
            }
            printf("\n"); // Move to the next line after each row
        }

        return 0;
    
}