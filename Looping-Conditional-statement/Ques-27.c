#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    // Input the value of n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= (float)i / (i + 1);
        } else {
            sum += (float)i / (i + 1);
        }
    }

    // Display the sum of the series
    printf("Sum of the series: %.2f\n", sum);

    return 0;
}