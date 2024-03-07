// Accept marks from user and check pass or fail

#include <stdio.h>

int main(){
    int mark;

    printf("Enter your marks : ");
    scanf("%d", &mark);

    if(mark >= 276 && mark <= 600){
        printf("You are Passed.");
    }
    else if(mark >= 601){
            printf("You are entering invalid marks");
    }else{
        printf("you are fail !");
    }
}