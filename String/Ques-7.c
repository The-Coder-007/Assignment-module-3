// Write a program in C to copy one string to another string

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;

    // Input a string from the user
    printf("Enter a string: ");
    gets(str1);

    // Copying the contents of str1 to str2
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0'; // Append null character to mark the end of str2

    // Displaying the copied string
    printf("Copied string: %s\n", str2);

    return 0;
}