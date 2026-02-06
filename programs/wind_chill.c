#include<stdio.h>
#include<math.h>
''
int main(){
    float t, v, wchill;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &t);
    printf("Enter wind speed in miles per hour: ");
    scanf("%f", &v);
    // Calculate wind chill using the formula
    wchill = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("Wind Chill Index: %.2f\n", wchill);
}