// calculate the Factorial of a Given Number using while loop


#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the input number is negative
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial using while loop
        int i = 1;
        while (i <= num) {
            factorial *= i;
            i++;
        }
        
        // Display the factorial
        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}