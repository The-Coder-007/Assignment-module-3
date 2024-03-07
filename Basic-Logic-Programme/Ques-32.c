// Accept 2 numbers and find out its sum check it size


#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Display the sum
    printf("Sum: %d\n", sum);

    // Check size of sum variable
    printf("Size of sum variable: %lu bytes\n", sizeof(sum));

    return 0;
}