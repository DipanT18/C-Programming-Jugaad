#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if((a > b) && (a != b)){
        printf("%d is greater than %d\n%d is not equal to %d\n", a, b, a, b);
    } else if((a < b) && (a != b)) {
        printf("%d is less than %d\n%d is not equal to %d\n", a, b, a, b);
    } else if (a == b){
        printf("%d is equal to %d\n", a, b);
    }
    return 0;
}  