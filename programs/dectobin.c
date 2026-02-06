//This program is to convert decimal number to binary number using function and store in an array

#include<stdio.h>
int decimalToBinary(int num, int binArr[]) {
    int index = 0;
    while(num > 0) {
        binArr[index] = num % 2;
        num /= 2;
        index++;
    }
    return index; // Return the number of bits
}

int main() {
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
    int binArr[32]; // Assuming a maximum of 32 bits for the binary representation
    int length = decimalToBinary(number, binArr);
    
    printf("The binary equivalent is: ");
    for(int i = length - 1; i >= 0; i--) {
        printf("%d", binArr[i]);
    }
    printf("\n");
    
    return 0;
}