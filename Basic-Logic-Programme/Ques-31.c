// Convert kilometers into meters

#include <stdio.h>

int main() {
    float kilometers, meters;

    // Input distance in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers to meters
    meters = kilometers * 1000;

    // Display the converted distance in meters
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

    return 0;
}