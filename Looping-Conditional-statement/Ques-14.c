// Accept 5 numbers from user and find those numbers factorials


#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int numbers[5];
    
    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate and display factorials
    printf("Factorials of the entered numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d! = %d\n", numbers[i], factorial(numbers[i]));
    }

    return 0;
}