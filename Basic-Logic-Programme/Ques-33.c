// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

int main() {

    int N;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &N);

    // Print the first three powers of the integergcc 
    printf("First three powers of %d:\n", N);
    printf("%d^1 = %d\n", N, N);
    printf("%d^2 = %d\n", N, N * N);
    printf("%d^3 = %d\n", N, N * N * N);

    return 0;
}
