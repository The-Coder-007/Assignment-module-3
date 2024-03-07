/* Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot */

#include <stdio.h>

int main(){
    int temp, message;
    printf("Enter Temprature in centigrade : ");
    scanf("%d", &temp);


    if(temp == 0){
        printf("Its Freezing weather !");
    }

    else if(temp <= 10){
        printf("Its very cold weather !");
    }
    else if(temp <= 20){
        printf("Its cold weather !");
    }
    else if( temp <=30 ){
        printf("Its normal weather !");
    }
    else if(temp <= 40 ){
        printf("Its hot weather !");
    }

    else{
        printf("Its very hot day !");
    }


}
