// Accept 5 expense from user and find average of expense


#include <stdio.h>

int main() {
    float expenses[5];
    float totalExpense = 0, averageExpense;

    // Input expenses from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter expense %d: $", i + 1);
        scanf("%f", &expenses[i]);
        totalExpense += expenses[i];
    }

    // Calculate average expense
    averageExpense = totalExpense / 5;

    // Display the average expense
    printf("\nAverage expense: $%.2f\n", averageExpense);

    return 0;
}