#include<stdio.h>

int main(){
	int i, j;	
	for (i=0; i<=5; i++){
		for (j=0; j<=i; j++){
			printf(" *");
		}
		printf("\n");
	}

	
	int k, l;	
	for (k=0; k<=5; k++){
		for (l=0; l<=5-k; l++){
			printf(" *");
		}
		printf("\n");
	}
}
