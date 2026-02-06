//This program is written to convert binary number to decimal number using function 

#include <stdio.h>
int binaryToDecimal(char bits[], int length) {
    int decimal = 0;
    for(int i = 0; i < length; i++) {
        if(bits[length - i - 1] == '1') {
            decimal += (1 << i); // 2^i using bitwise shift
        }
    }
    return decimal;
}

int main() {
    char bits[32];
    printf("Enter a binary number: ");
    scanf("%s", bits);  
    
    int length = 0;
    while(bits[length] != '\0') {
        length++;
    }
    
    int decimal = binaryToDecimal(bits, length);
    printf("The decimal equivalent is: %d\n", decimal);
    
    return 0;
}