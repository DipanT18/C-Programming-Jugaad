#include<stdio.h>
#include<math.h>

int main(){
    float L1, L2, G1, G2, distance;
    printf("Enter latitude and longitude of first point (L1 G1): ");
    scanf("%f %f", &L1, &G1);
    printf("Enter latitude and longitude of second point (L2 G2): ");
    scanf("%f %f", &L2, &G2);
    // Calculate distance using Euclidean formula
    distance = 3969*acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));
    printf("Distance between the two points: %.2f miles\n", distance);
}