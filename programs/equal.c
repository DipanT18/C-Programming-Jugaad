#include<stdio.h>
#include<math.h>

int main(){
    int a, reversed = 0, original, remainder;
    printf("Enter a five digit integer: ");   
    scanf("%d", &a);
    original = a;

    if (a < 10000 || a > 99999) {
        printf("Error: Please enter a five digit integer.\n");
        return 1;
    }else{
        while ((a != 0)) {
            remainder = a % 10;
            reversed = reversed * 10 + remainder;
            a /= 10;

        
        }
    }
    if (original == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;

   

}
