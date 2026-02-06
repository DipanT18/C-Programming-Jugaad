//This program is written to calculate sum of a number using recursion
#include<stdio.h>
int sum(int num){
    if(num == 0 || num == 1) return 1;  
    return num + sum(num - 1);  
}

int main(){
    int number;
    printf("Enter a number to find its sum: ");
    scanf("%d", &number);
    if(number < 0){
        printf("Sum is not defined for negative numbers.\n");
    } else {
        printf("Sum of %d is %d\n", number, sum(number));
    }
    return 0;
}
      
