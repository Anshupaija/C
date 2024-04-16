#include <stdio.h>

int main() {
    int i, j, rows,cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    

    printf("Enter number of Cols: ");
    scanf("%d", &cols);


    // Outer loop for rows
    for(i = 1; i <= rows; i++) {
        // Inner loop for columns
        for(j = 1; j <= cols; j++) {
            // Print stars for the first and last rows
            // or for the first and last columns
            if(i == 1 || i == rows || j == 1 || j == cols) {
                printf("* ");
            } else {
                printf("  "); // Print spaces for the hollow part
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

