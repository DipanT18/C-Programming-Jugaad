#include<stdio.h>
int main(){
    int a = 0;
int b = (a++ && 5) || (++a && 10);
printf("%d %d\n", a, b);
return 0;
}