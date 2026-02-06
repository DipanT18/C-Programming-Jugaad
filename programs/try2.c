#include<stdio.h>

int main(){
    int a, sum_of_digits = 0, digit;
    printf("Enter a five digit number: ");
    scanf("%d", &a);

    while (a != 0) {
        digit = a % 10; // Extract the last digit
        sum_of_digits += digit; // Add it to the sum
        a /= 10; // Remove the last digit
    }
    printf("Sum of digits: %d\n", sum_of_digits);
    return 0;
} 