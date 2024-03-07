// Find circumference of Triangle formula : triangle = a + b + c

# include <stdio.h>

int main(){
    double triangle, a , b , c;

    printf("Enter the value of a : ");
    scanf("%lf" , &a,"\n");
    printf("Enter the value of b : ");
    scanf("%lf" , &b , "\n");
    printf("Enter the value of c : ");
    scanf("%lf" , &c, "\n");

    triangle = a + b+ c;

    printf("value of triangle is : %.2lf", triangle);

}