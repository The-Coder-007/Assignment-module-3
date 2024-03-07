// Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Input a positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n <= 0) {
        printf("Error! Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the sum of natural numbers up to n using a while loop
    while (i <= n) {
        sum += i;
        i++;
    }

    // Display the sum
    printf("Sum of first %d natural numbers: %d\n", n, sum);

    return 0;
}
