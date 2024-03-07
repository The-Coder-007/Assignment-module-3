// Write a program in C to print individual characters of a string in reverse order


#include <stdio.h>

int main() {
    char str[100];
    int i,j;

    // Input a string from the user
    printf("Enter a string: ");
    gets(str);

    // Printing individual characters of the string in reverse order
    printf("Individual characters of the string in reverse order:\n");
    for (i = 0; str[i] != '\0'; i++) {
        // Do nothing, loop through the string
    }

    // Print the characters in reverse order
    for (j = i - 1; j >= 0; j--) {
        printf("%c\n", str[j]);
    }

    return 0;
}