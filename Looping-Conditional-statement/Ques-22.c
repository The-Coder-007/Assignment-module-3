#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num;

    // Reverse the number
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    return (original == reversed);
}

int main() {
    int count = 0, num;

    // Input 3 numbers from the user
    printf("Enter 3 numbers:\n");
    while (count < 3) {
        scanf("%d", &num);
        
        // Check if the number is a palindrome
        if (isPalindrome(num)) {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }

        count++;
    }

    return 0;
}