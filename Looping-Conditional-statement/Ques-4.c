// WAP to print table up to given numbers

#include<stdio.h>

int main(){
	int i,number;

  printf("enter number");
  scanf("%d", &number);
 

  // Print the multiplication table for the number 2
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", number, i, number * i);
  }

  return 0;
}
