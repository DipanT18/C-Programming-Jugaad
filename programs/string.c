//This program is written for demonstrating string handling in C programming language.

#include <stdio.h>
#include <string.h>
int main() {

char str1[100], str2[100];
printf("Enter first string: ");
fgets(str1, sizeof(str1), stdin);
printf("Enter second string: ");
fgets(str2, sizeof(str2), stdin);

//Adding add the strings
strcat(str1, str2);
printf("Concatenated string: %s", str1);

return 0;
}
