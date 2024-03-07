// WAP to take two Array input from user and sort them in ascending or
// descending order as per user’s choice

#include <stdio.h>

int sort(int choice){
    int i, j;
int arr[5], temp;

if(choice == 1){
    for (i=0; i<5; i++){
        printf("Enter the array %d : ", i);
        scanf("%d" , &arr[i]);

    }
    for(i = 0; i < 5; i++){
        for (j=i+1; j<5; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d,", arr[i]);
    }
}
else if(choice == 2){
     for (i = 0; i<5; i++){
        printf("Enter the array %d : ", i);
        scanf("%d" , &arr[i]);

    }
    for(i = 0; i < 5; i++){
        for (j=i+1; j<5; j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d,", arr[i]);
    }
}
}

int main(){
    int choice;
    printf("1.Ascending");
    printf("\n 2. Descending \n");

    printf("Choose 1 or 2 : ");
    scanf("%d", &choice);

    sort(choice);
}