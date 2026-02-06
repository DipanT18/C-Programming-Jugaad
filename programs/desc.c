#include <stdio.h>

int convertBinary(int bits[], int length) {
    int decimal = 0;
    for(int i = 0; i < length; i++) {
        if(bits[length - i - 1] == 1) {  // Check if 1
            decimal += (1 << i);
        }
    }
    return decimal;
}

int main() {
    int bits[] = {1, 1, 0, 1};  // Binary 1101
    int length = 4;
    
    printf("Decimal: %d\n", convertBinary(bits, length));
    
    return 0;
}