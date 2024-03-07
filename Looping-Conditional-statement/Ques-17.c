// Calculate 5 numbers from user and calculate number of even and odd using
// of while loop


#include <stdio.h>

int main() {
    int num, evenCount = 0, oddCount = 0, count = 0;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    while (count < 5) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        count++;
    }

    // Display the counts of even and odd numbers
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}