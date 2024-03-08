// WAP to print factorial of given number

#include <stdio.h>

int main(){
    int i,num, factorial =1;

    // input the number from the user
    printf("Enter the number : ");
    scanf("%d", &num);

    // calculate factorial of the number 
    for(i=1; i<=num;i++){
        factorial *= i;
    }

    //Displaying factorial number
    printf("Factorial of %d is : %d\n", num,factorial);
}