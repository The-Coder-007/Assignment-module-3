// Program of Armstrong Number in C Using For Loop & While Loop


#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    // Reset originalNum to num
    originalNum = num;

    // Calculate the result using while loop
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number using while loop
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    // Reset result and n for for loop calculation
    result = 0;
    n = 0;

    // Calculate the result using for loop
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        n++;
    }

    // Check if the number is an Armstrong number using for loop
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}