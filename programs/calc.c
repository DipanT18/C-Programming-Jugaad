#include<stdio.h>

int main(){
    int a, b, Sum, Diff, Prod, Quot, Rem;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    Sum = a + b;
    Diff = a - b;
    Prod = a * b;
    if(b != 0){
        Quot = a / b;
        Rem = a % b;
        printf("Sum: %d\n", Sum);
        printf("Difference: %d\n", Diff);
        printf("Product: %d\n", Prod);
        printf("Quotient: %d\n", Quot);
        printf("Remainder: %d\n", Rem);
    } else {
        printf("Sum: %d\n", Sum);
        printf("Difference: %d\n", Diff);
        printf("Product: %d\n", Prod);
        printf("Quotient: Undefined (division by zero)\n");
        printf("Remainder: Undefined (division by zero)\n");
    }
}