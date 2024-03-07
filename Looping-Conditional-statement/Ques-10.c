// Write a program you have to make a summation of first and last Digit. (E.g.,
// 1234 Ans: -5)

#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract the last digit
    last_digit = num % 10;

    // Extract the first digit
    while (num >= 10) {
        num /= 10;
    }
    first_digit = num;

    // Calculate the sum
    sum = first_digit + last_digit;

    // Display the sum
    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}