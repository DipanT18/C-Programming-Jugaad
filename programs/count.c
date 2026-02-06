//This program is written to count the total no of characters in a sentence using while loop excluding spaces.
#include <stdio.h>
int main(){
    int count = 0;
    char ch;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n'){
        if (ch != ' '){
            count++;
        }
    }
    printf("Total number of characters: %d\n", count);
}