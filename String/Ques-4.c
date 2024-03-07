// Write a program in C to count the total number of words in a string.



#include <stdio.h>

int main() {
    char str[100];
    int i, wordCount;

    // Input a string from the user
    printf("Enter a string: ");
    gets(str);

    // Initialize wordCount to 1 to account for the first word
    wordCount = 1;

    // Counting the number of words in the string
    for (i = 0; str[i] != '\0'; i++) {
        // If a space or newline character is found, increment wordCount
        if (str[i] == ' ' || str[i] == '\n') {
            wordCount++;
        }
    }

    // Display the total number of words in the string
    printf("Total number of words in the string: %d\n", wordCount);

    return 0;
}