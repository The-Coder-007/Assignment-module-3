//  WAP to print Fibonacci series up to given numbers

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    // Print the first two terms of the series
    printf("%d, %d", first, second);

    // Calculate and print the rest of the terms
    for (int i = 2; i < n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
