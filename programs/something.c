#include<stdio.h>
int main(){
    int a, b, result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    result = a *= b += 3;
    printf("The result of a *= b += 3 is: %d\n", result);
    return 0;
}