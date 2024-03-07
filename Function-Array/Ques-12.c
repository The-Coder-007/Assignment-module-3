// WAP to accept 5 students name and store it in array

#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50]; // Array to store names of 5 students
    int i;

    // Accepting names of 5 students from the user
    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Displaying the names of the students
    printf("\nNames of the students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }

    return 0;
}