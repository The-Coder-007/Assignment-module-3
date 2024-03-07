// Write a C program to read the value of an integer m and display the value of
// n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0

#include <stdio.h>

int main() {
    int m, n;

    // Input the value of m
    printf("Enter the value of m: ");
    scanf("%d", &m);

    // Determine the value of n based on the value of m
    n = (m > 0) ? 1 : ((m == 0) ? 0 : -1);

    // Display the value of n
    printf("The value of n is: %d\n", n);

    return 0;
}