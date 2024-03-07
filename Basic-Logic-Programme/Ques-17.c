// Calculate person’s insurance premium based on salary

#include <stdio.h>

int main() {
    double salary, insurancePremium ,basePremiumRate = 0.1 ;// Base premium rate (10% of salary)

    // Input salary
    printf("Enter your annual salary: ");
    scanf("%lf", &salary);

    // Calculate insurance premium
    insurancePremium = basePremiumRate * salary;

    // Display the result
    printf("Your insurance premium is: $%.2lf\n", insurancePremium);

    return 0;
}
