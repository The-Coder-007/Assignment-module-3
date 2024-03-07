

#include <stdio.h>

int main(){
    int num1[2][2], num2[2][2], add[2][2], mul[2][2], sub[2][2];
    int i, j, k;

    printf("======== Matrix for 1st Array =======\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter the array of first element : ");
            scanf("%d", &num1[i][j]);
        }
    }
    printf("======== Matrix for 2nd Array =======\n");
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter the array of Second element : ");
            scanf("%d", &num2[i][j]);
        }
    }

    printf("2D array for 1st element \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\t%d",num1[i][j]);
        }
        printf("\n");
    }

     printf("2D array for 2nd element \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\t%d",num2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++){
        
    }



}