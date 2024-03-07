// Write a program in C to find the maximum number of characters in a string.


#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int count = 0;

    // Input a string from the user
    printf("Enter a string: ");
    gets(str);

    // Finding the maximum number of characters in the string
    while (str[count] != '\0') {
        count++;
    }

    // Displaying the maximum number of characters
    printf("Maximum number of characters in the string: %d\n", count);

    return 0;
}