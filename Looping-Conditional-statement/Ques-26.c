#include <stdio.h>

int main() {
    int n, sum = 0, currentSum = 0;

    // Input the value of n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of the series using a for loop
    for (int i = 1; i <= n; i++) {
        currentSum += i;
        sum += currentSum;
    }

    // Display the sum of the series
    printf("Sum of the series: %d\n", sum);

    return 0;
}