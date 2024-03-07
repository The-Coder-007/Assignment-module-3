#include <stdio.h>

int main() {
    int rows;
    
    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Iterate through each row
    for (int i = 0; i < rows; i++) {
        char currentChar = 'A';
        // Print characters based on the pattern
        for (int j = 0; j <= i; j++) {
            printf("%c ", currentChar++);
        }
        printf("\n");
    }

    return 0;
}