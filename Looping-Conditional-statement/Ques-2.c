// WAP to accept 5 numbers from user and display all numbers


#include <stdio.h>

int main() {
    int i, num;
    int numbers[5];

    printf("Enter 5 numbers:\n");

    // Accept 5 numbers from the user and store them in an array
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display all the numbers
    printf("You entered the following numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}