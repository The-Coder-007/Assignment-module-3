// .Find circumference of square formula : C = 4 * a

# include <stdio.h>

int main(){

    double C, a;

    printf("Enter the value of area: ");
    scanf("%lf", &a);

    C = 4*a;

    printf("The Circumference of square is : %.2lf", C);

}