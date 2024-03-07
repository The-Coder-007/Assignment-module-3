/*
Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit                                21. Charge/unit
22. upto 350                            23. @1.20
24. 350 and above but less than 600     25. @1.50
26. 600 and above but less than 800     27. @1.80
28. 800 and above                       29. @2.00
*/

#include <stdio.h>

int main() {
    int customer_id, unit_consumed;
    char customer_name[50];
    float total_amount;

    // Input customer details
    printf("Enter customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter customer name: ");
    scanf("%s", customer_name);
    printf("Enter unit consumed: ");
    scanf("%d", &unit_consumed);

    // Calculate total amount based on unit consumed
    if (unit_consumed <= 350) {
        total_amount = unit_consumed * 1.20;
    } else if (unit_consumed > 350 && unit_consumed < 600) {
        total_amount = unit_consumed * 1.50;
    } else if (unit_consumed >= 600 && unit_consumed < 800) {
        total_amount = unit_consumed * 1.80;
    } else {
        total_amount = unit_consumed * 2.00;
    }

    // Display electricity bill
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Unit Consumed: %d\n", unit_consumed);
    printf("Total Amount: $%.2f\n", total_amount);

    return 0;
}