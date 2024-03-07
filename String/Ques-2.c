// Write a program in C to separate individual characters from a string

#include <stdio.h>

int main() {
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    gets(str);

    // Separating individual characters from the string
    printf("Individual characters from the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}