// WAP to input the week number and print week day.

#include <stdio.h>

int main(){
    int n_of_weak, total_days;

    printf("Enter the number of week :");
    scanf("%d", &n_of_weak);

    total_days = n_of_weak * 7;

    printf("the total days of %d week is : %d",n_of_weak, total_days);
}