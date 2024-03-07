// WAP to check whether a number is negative, positive or zero

#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative, positive, or zero
    if (num < 0) {
        printf("The number is negative.\n");
    } else if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}