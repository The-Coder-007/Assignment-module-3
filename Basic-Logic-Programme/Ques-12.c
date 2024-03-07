// Accept number of students from user. I need to give 5 apples to each
// student. How many apples are required?

# include <stdio.h>

int main(){

    int nOfStudent, apple = 5,requiredApple;

    printf("Enter the Number of Student : ");
    scanf("%d", &nOfStudent);

    requiredApple = nOfStudent*apple;

    printf("Number of student is %d \n Required apple for each student get 5 apple is : %d" , nOfStudent, requiredApple);

}