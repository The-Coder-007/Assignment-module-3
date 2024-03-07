// Find ascii value of given number

# include <stdio.h>

int main(){

    

    int n, value, asciiValue=48; // Ascii value of 0 is 48 and to find after this is just add the number with 48;

    printf("Enter the number for find ascii value : ");
    scanf("%d", &n);

    value = n+asciiValue;

    printf("the given number is : %d and the ascii value is : %d", n , value);



}