#include <stdio.h>

int main() {
    int rows;
    
    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Iterate through each row
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf("   ");
        }
        // Print stars
        for (int k = 0; k < 2 * i + 1; k++) {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}