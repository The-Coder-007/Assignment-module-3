// C Program to Check Uppercase or Lowercase or Digit or Special
// Character

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is uppercase, lowercase, digit, or special character
    if (isupper(ch)) {
        printf("The character is uppercase.\n");
    } else if (islower(ch)) {
        printf("The character is lowercase.\n");
    } else if (isdigit(ch)) {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a special character.\n");
    }

    return 0;
}