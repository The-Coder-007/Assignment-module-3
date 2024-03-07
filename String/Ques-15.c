// Write a program in C to find the largest and smallest words in a string.


#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH], smallest[MAX_LENGTH], largest[MAX_LENGTH];
    int i, wordCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Tokenize the string and find smallest and largest words
    char *token = strtok(str, " ");
    strcpy(smallest, token);
    strcpy(largest, token);
    while (token != NULL) {
        wordCount++;
        if (strlen(token) < strlen(smallest)) {
            strcpy(smallest, token);
        }
        if (strlen(token) > strlen(largest)) {
            strcpy(largest, token);
        }
        token = strtok(NULL, " ");
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}