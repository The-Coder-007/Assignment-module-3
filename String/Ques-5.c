// Write a program in C to compare two strings without using string library
// functions.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, isEqual = 1;

    // Input the first string from the user
    printf("Enter the first string: ");
    gets(str1);

    // Input the second string from the user
    printf("Enter the second string: ");
    gets(str2);

    // Compare the two strings character by character
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            isEqual = 0; // Set isEqual to 0 if characters are not equal
            break; // Exit the loop if a mismatch is found
        }
    }

    // Display the result of comparison
    if (isEqual) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}