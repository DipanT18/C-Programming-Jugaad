//This program is written to multiple two numbers using recursion not using * sign.
#include <stdio.h>
int main(){
    int add(int a, int b){
        if (b == 0)
            return a;
        return add(a + 1, b - 1);
    }
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int sum = add(num1, num2);
    printf("Sum: %d\n", sum);
    return 0;
}