// Convert years into days and months

#include <stdio.h>

int main() {
    int years, days, months;

    // Input number of years
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Convert years to days (assuming 365 days in a year)
    days = years * 365;

    // Convert days to months (assuming 30 days in a month)
    months = days / 30;
    days = days % 30;

    // Display the converted number of days and months
    printf("Equivalent: %d years = %d months and %d days\n", years, months, days);

    return 0;
}