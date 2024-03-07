/* Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary */


#include <stdio.h>

int main() {
    float monthlySalary, insurancePremium, remainingSalary, loanInstallment;

    // Input monthly salary
    printf("Enter your monthly salary: $");
    scanf("%f", &monthlySalary);

    // Calculate insurance premium (10%)
    insurancePremium = 0.1 * monthlySalary;

    // Deduct insurance premium from the salary
    remainingSalary = monthlySalary - insurancePremium;

    // Calculate loan installment (10% of remaining salary)
    loanInstallment = 0.1 * remainingSalary;

    // Deduct loan installment from the remaining salary
    remainingSalary -= loanInstallment;

    // Display the results
    printf("Insurance premium: $%.2f\n", insurancePremium);
    printf("Loan installment: $%.2f\n", loanInstallment);
    printf("Remaining salary after deductions: $%.2f\n", remainingSalary);

    return 0;
}