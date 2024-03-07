#include <stdio.h>
#include <string.h>

void rev(char *str){
    if(*str == '\0'){
        return;
    }
    rev(str +1);
    printf("%c", *str);
}

int main(){
    char str[50];
    printf("ENter the string :");
    gets(str); // scanf("%s", &str)
    rev(str);
}