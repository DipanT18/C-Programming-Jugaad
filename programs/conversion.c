//Lets convert distance from kilometers to meters, centimeters, and millimeters

#include <stdio.h>
int main() {
    float kilometers, meters, centimeters, millimeters;

    // Input distance in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Conversion calculations
    meters = kilometers * 1000;
    centimeters = kilometers * 100000;
    millimeters = kilometers * 1000000;

    // Output the results
    printf("%.2f kilometers is equal to:\n", kilometers);
    printf("%.2f meters\n", meters);
    printf("%.2f centimeters\n", centimeters);
    printf("%.2f millimeters\n", millimeters);

    return 0;
}