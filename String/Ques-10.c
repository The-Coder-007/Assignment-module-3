// Write a program in C to extract a substring from a given string

#include <stdio.h>

int main() {
    char str[100], substr[100];
    int start, length, i = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the starting position and length of substring: ");
    scanf("%d %d", &start, &length);

    while (i < length && str[start + i] != '\0') {
        substr[i] = str[start + i];
        i++;
    }
    substr[i] = '\0';

    printf("Substring: %s\n", substr);

    return 0;
}