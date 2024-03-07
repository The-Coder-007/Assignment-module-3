/*Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
1. .
2. .
iii. 5 * 10 = 50
*/

#include <stdio.h>

int main() {
    int N;

    // Input the value of N from the user
    printf("Enter a number: ");
    scanf("%d", &N);

    // Print the multiplication table of N
    printf("Multiplication Table of %d:\n", N);
    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", N, i, N * i);
    }

    return 0;
}