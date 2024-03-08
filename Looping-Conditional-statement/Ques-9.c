#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for later use
    int original_num = num;

    // Find the summation of digits
    while (num != 0) {
        digit = num % 10; // Extract the last digit
        sum += digit;     // Add the digit to the sum
        num /= 10;        // Remove the last digit
    }

    // Check if the original number was negative
    if (original_num < 0) {
        sum = -sum; // Make the sum negative
    }

    // Display the summation of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
