// Write a program in C to count the total number of vowels or consonants in a
// string.


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;

    // Input a string from the user
    printf("Enter a string: ");
    gets(str);

    // Counting the number of vowels and consonants in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase
        char ch = tolower(str[i]);

        // Check if the character is an alphabet
        if (ch >= 'a' && ch <= 'z') {
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Displaying the counts
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}