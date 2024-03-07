// WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Input three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum number using ternary operator
    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Display the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}