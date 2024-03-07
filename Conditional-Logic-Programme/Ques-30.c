// .If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
// minimum bill should be of Rs. 256/

#include <stdio.h>

int main() {
    float bill_amount, total_bill;

    // Input bill amount
    printf("Enter the bill amount: ");
    scanf("%f", &bill_amount);

    // Calculate total bill amount with surcharge if bill exceeds Rs. 800
    if (bill_amount <= 256) {
        total_bill = 256; // Minimum bill of Rs. 256
    } else if (bill_amount <= 800) {
        total_bill = bill_amount; // No surcharge if bill is less than or equal to Rs. 800
    } else {
        total_bill = bill_amount + (bill_amount * 0.18); // 18% surcharge if bill exceeds Rs. 800
    }

    // Display total bill amount
    printf("Total bill amount: Rs. %.2f\n", total_bill);

    return 0;
}