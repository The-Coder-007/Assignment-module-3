// Write a program in C to find the length of a string without using library
// functions.


#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input a string from the user
    printf("Enter a string: ");
    gets(str);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Display the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}