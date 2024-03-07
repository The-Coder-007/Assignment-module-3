// Find area of Triangle Formula : A = 1/2 × b × h

#include <stdio.h>

int main(){

    int A, b, h;

    printf("Enter the value of base : ");
    scanf("%d", &b);

    printf("Enter the value of height : ");
    scanf("%d", &h);

    A = (b*h)/2;

    printf("Area of Triangle is : %d", A);

}