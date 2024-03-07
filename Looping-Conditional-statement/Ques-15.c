//Calculate sum of 10 numbers using of while loop


#include <stdio.h>

int main() {
    int sum = 0, num, count = 0;

    // Input 10 numbers from the user
    printf("Enter 10 numbers:\n");
    while (count < 10) {
        scanf("%d", &num);
        sum += num;
        count++;
    }

    // Display the sum
    printf("Sum of the entered numbers: %d\n", sum);

    return 0;
}
