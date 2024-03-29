
#include <stdio.h>

int main() {
    int n = 10; // Size of the pattern
    int matrix[n][n];
    int num = 1;

    // Fill the matrix with numbers in the specified pattern
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (num <= n * n) {
        // Fill top row
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;

        // Fill rightmost column
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        // Fill bottom row
        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        // Fill leftmost column
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }

    // Print the matrix
    printf("Pattern:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}