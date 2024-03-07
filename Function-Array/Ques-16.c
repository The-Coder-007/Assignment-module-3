// Accept 5 numbers from user and perform sum of array


#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    int i;

    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculating the sum of array elements
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Displaying the sum
    printf("Sum of the numbers in the array: %d\n", sum);

    return 0;
}