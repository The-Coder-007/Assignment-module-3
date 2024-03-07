// Convert days into months


#include <stdio.h>

int main() {
    int days;
    float months;

    // Input number of days
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Convert days to months (assuming 30 days in a month)
    months = days / 30.0;

    // Display the converted number of months
    printf("Approximate number of months: %.2f\n", months);

    return 0;
}