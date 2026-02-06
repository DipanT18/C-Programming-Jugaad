#include<stdio.h>

int main(void) {
    char l;
    printf("They say nothing lasts forever. Want to be my 'nothing'? (Y/N)\n");
    //Now waiting for your reply
    scanf(" %c", &l);
    if (l == 'Y' || l == 'y') {
        printf("You and me, forever and always.\n");
    } else if (l == 'N' || l == 'n') {
        printf("I guess some things really don't last forever...\n");
    } else {
        printf("Invalid input. Please respond with 'Y' or 'N'.\n");
    }
    return 0;
}