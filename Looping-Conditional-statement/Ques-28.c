#include <stdio.h>

int main() {
    int i;
    int term = 1;

    printf("Series: ");

    // Printing the series
    for (i = 0; i < 10; i++) {
        printf("%d ", term);
        if (i % 2 == 0) {
            term *= 3;
        } else {
            term *= 2;
        }
    }

    printf("\n");

    return 0;
}