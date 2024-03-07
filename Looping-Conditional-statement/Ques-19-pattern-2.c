#include <stdio.h>

int main(){
    int i, j;
    int ch= 1;

    for (i=0; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%d ", ch++);
        }
        printf("\n");
    }
}