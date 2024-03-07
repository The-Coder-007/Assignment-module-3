// Calculate compound interest

// The daily CI formula is given as A = P (1 + r / 365)365 t, where P is the principal amount, r is the interest rate of interest in decimal form, n = 365 (it means that the amount compounded 365 times in a year), and t is the time.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, amount, compoundInterest;

    // Input principal amount, Amount.
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual  amount : ");
    scanf("%f", &amount);

    // Calculate compound interest
    //  the pow() function is responsible for calculating the power of any integer or variable. It is used to return the result of the first argument with respect to the power of the second argument
    compoundInterest = principal - amount;

    // Display the result
    printf("Compound interest  $%.2f\n", compoundInterest);

    return 0;
}

