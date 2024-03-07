// Write a program in C to read a sentence and replace lowercase characters with
// uppercase and vice versa.

#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100];

    // Input a sentence from the user
    printf("Enter a sentence: ");
    gets(sentence);

    // Iterate through each character of the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        // Check if the character is lowercase
        if (islower(sentence[i])) {
            // Convert lowercase to uppercase
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            // Convert uppercase to lowercase
            sentence[i] = tolower(sentence[i]);
        }
    }

    // Display the modified sentence
    printf("Modified sentence: %s\n", sentence);

    return 0;
}