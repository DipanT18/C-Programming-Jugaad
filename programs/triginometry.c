#include<stdio.h>
#include<math.h>
int main(){
    float angle, sine, cosine, tangent, cosecant, secant, cotangent;
    printf("Enter angle in degrees: ");
    scanf("%f", &angle);
    angle = angle * (M_PI / 180.0); // Convert degrees to radians
    sine = sin(angle);
    cosine = cos(angle);
    tangent = tan(angle);
    cosecant = 1/sine;
    secant = 1/cosine;
    cotangent = 1/tangent;
    printf("Sine: %.2f\n", sine);
    printf("Cosine: %.2f\n", cosine);
    printf("Tangent: %.2f\n", tangent);
    printf("Cosecant: %.2f\n", cosecant);
    printf("Secant: %.2f\n", secant);
    printf("Cotangent: %.2f\n", cotangent);
    return 0;
}