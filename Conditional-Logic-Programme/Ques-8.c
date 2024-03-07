// WAP to accept the height of a person in centimeters and categorize the
// person according to their height.

#include <stdio.h>

int main() {
    float height;

    // Input height in centimeters
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    // Categorize the person based on height
    if (height < 150) {
        printf("The person is short.\n");
    } else if (height >= 150 && height <= 180) {
        printf("The person is of average height.\n");
    } else {
        printf("The person is tall.\n");
    }

    return 0;
}