// Write a program in C to find the number of times a given word 'is' appears in
// the given string


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], *ptr;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (ptr = str; *ptr; ptr++) {
        if (tolower(*ptr) == 'i' && tolower(*(ptr + 1)) == 's') {
            count++;
        }
    }

    printf("Number of times the word 'is' appears: %d\n", count);

    return 0;
}