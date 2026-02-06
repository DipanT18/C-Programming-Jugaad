#include <stdio.h>
#include<string.h>

int main(){
    char s1[100], s2[100];
    char result[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int len = (len1 < len2) ? len1 : len2;

    for(int i=0; i<len; i++){
        char c1 = (i<len1) ? s1[i] : 0;
        char c2 = (i<len2) ? s2[i] : 0;
        result[i] = c1 + c2; //ASCII addition
    }
    result[len] = '\0'; // Null-terminate the result string
    printf("ASCII merged string: %s\n", result);
    return 0;
}