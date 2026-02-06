//This program is a simple demonstration of a while loop in C programming language.

#include <stdio.h>  
int main() {
    int i=1, n
    float product=1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while(i <= n) {
        product *= i; // Multiply product by i
        i++; // Increment i by 1
    }
    printf("The factorial of %d is: %d\n", n, product);
    return 0;
}