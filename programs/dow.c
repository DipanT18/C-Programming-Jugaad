//This program is used to demonstrate the use of do while loop in C programming language.

//Do while loop is similar to while loop, but the condition is checked after the execution of the loop body. This means that the loop body will always execute at least once.

//We are creating multiplication table of a given number using do while loop.
#include <stdio.h>

int main(){

    int i, num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    i = 1;
    do {
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    } while(i <= 10);

return 0;
}

//Using for loop for the same functionality
/*
#include <stdio.h>
int main(){
int i, num;
printf("Enter a positive integer: ");
scanf("%d", &num);

for(i = 1; i <= 10; i++){
    printf("%d * %d = %d\n", num, i, num * i);

return 0;
}