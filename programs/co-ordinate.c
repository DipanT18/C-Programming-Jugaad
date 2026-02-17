//This program is written to calculate the distance between point and origin in plane graph using structure
#include <stdio.h>
#include <math.h>
struct Point {
    float x;
    float y;
};  
float calculateDistance(struct Point p) {
    return sqrt(p.x * p.x + p.y * p.y);
}
int main() {
    struct Point p;
    printf("Enter the coordinates of the point (x y): ");
    scanf("%f %f", &p.x, &p.y);
    float distance = calculateDistance(p);
    printf("The distance between the point (%.2f, %.2f) and the origin is: %.2f\n", p.x, p.y, distance);
    return 0;
}