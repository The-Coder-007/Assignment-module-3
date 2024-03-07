// WAP to find minimum number among 3 numbers using ternary operator

#include <stdio.h>

int main() {
    int num1, num2, num3, min;

    // Input three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the minimum number using ternary operator
    min = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    // Display the minimum number
    printf("The minimum number is: %d\n", min);

    return 0;
}