// find the area of a rectangular prism formula : A=2(wl+hl+hw)

# include <stdio.h>

int main(){
    double A, w,l,h;

    printf("Enter the value of width : ");
    scanf("%lf", &w);

    printf("Enter the value of length : ");
    scanf("%lf", &l);

    printf("Enter the value of height : ");
    scanf("%lf", &h);

    A = 2*((w*l) + (h*l) + (h*w));

    printf("The area of rectangular prism is : %.2lf", A);

}