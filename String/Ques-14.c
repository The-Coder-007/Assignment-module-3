// Write a program in C to combine two strings manually


#include <stdio.h>

int main() {
    char str1[100], str2[100], combined[200];
    int i, j;

    // Input the first string from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input the second string from the user
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Combine the two strings manually
    i = 0;
    while (str1[i] != '\0') {
        combined[i] = str1[i];
        i++;
    }
    j = 0;
    while (str2[j] != '\0') {
        combined[i++] = str2[j++];
    }
    combined[i] = '\0'; // Append null character to mark the end of the combined string

    // Display the combined string
    printf("Combined string: %s\n", combined);

    return 0;
}