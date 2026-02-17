//This program is written to multiple two numbers using recursion not using function
#include<stdio.h>
int factorial(long long num){
    if(num == 0 || num == 1) return 1;  
    else return num * factorial(num - 1);  
}

int main(){
    long long number;
    printf("Enter a number to find its factorial: ");
    scanf("%lld", &number);
    if(number < 0){
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %lld is %lld\n", number, factorial(number));
    }
    return 0;
}