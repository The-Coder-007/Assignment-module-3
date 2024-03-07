// WAP to find factorial using recursion


#include <stdio.h>

// Function prototype
unsigned long long factorial(int n);

int main() {
    int num;
    unsigned long long fact;

    // Input number from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Error! Factorial of a negative number is undefined.");
    } else {
        // Call factorial function
        fact = factorial(num);
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}

// Recursive function to find factorial
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: factorial of n is n times factorial of n-1
    else {
        return n * factorial(n - 1);
    }
}
