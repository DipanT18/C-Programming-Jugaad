#include<stdio.h>
int main(){
    int n, n1, n2, n3, n4;
    printf("Enter an integer: ");
    scanf("%d", &n);
    n1 = n << 1;
    printf("The result of left shifting %d by 1 is: %d\n", n, n1);
    n2 = n << 2;
    printf("The result of left shifting %d by 2 is: %d\n", n, n2);
    n3 = n >> 1;
    printf("The result of right shifting %d by 1 is: %d\n", n, n3);
    n4 = n >> 2;
    printf("The result of right shifting %d by 2 is: %d\n", n, n4);
    return 0;
}