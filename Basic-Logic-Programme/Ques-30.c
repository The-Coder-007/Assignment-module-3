// WAP to convert years into days and days into years

#include <stdio.h>

int main() {
    int years, days;

    // Input number of years
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Convert years to days (assuming 365 days in a year)
    days = years * 365;

    // Display the equivalent number of days
    printf("%d years is equivalent to %d days.\n", years, days);

    // Input number of days
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Convert days to years (assuming 365 days in a year)
    years = days / 365;
    days = days % 365;

    // Display the equivalent number of years and remaining days
    printf("%d days is equivalent to %d years and %d days.\n", days + years * 365, years, days);

    return 0;
}