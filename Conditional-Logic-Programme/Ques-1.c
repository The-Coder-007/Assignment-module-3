// Write a C program to accept two integers and check whether they are equal
// or not

# include <stdio.h>

int main(){
    int a,b;

    printf("Enter the first Number : ");
    scanf("%d", &a);

    printf("Enter the Second Number : ");
    scanf("%d", &b);

    if(a == b){
        printf("First number is equal to Second number.");
    }
    else{
        printf("Number are not equal.");
    }
}
