// Accept 5 names from user at run time

#include <stdio.h>

int main() {
    char names[5][50]; // Array to store 5 names, each of maximum length 50

    // Input 5 names from the user
    printf("Enter 5 names, one per line:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Display the entered names
    printf("\nEntered names:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}