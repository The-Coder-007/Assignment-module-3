#include <stdio.h>

int main() {
    int num, reversed = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number using a for loop
    for (; num != 0; num /= 10) {
        reversed = reversed * 10 + num % 10;
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}