// WAP to find the largest of three numbers

#include <stdio.h>

int main() {
    double num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Assuming the first number is the largest initially
    largest = num1;

    // Check if the second number is larger
    if (num2 > largest) {
        largest = num2;
    }

    // Check if the third number is larger
    if (num3 > largest) {
        largest = num3;
    }

    // Display the largest number
    printf("The largest number is: %.2lf\n", largest);

    return 0;
}