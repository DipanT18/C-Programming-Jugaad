//This is infinite loops. 
//Remember to use caution with infinite loops, as they can cause your program to become unresponsive.
//Also remember to use this program copy paste one of them in another program because there are multiple main functions here.

//Using for loop to create an infinite loop
#include <stdio.h>
int main() {
    for(;;) {
        printf("This loop will run forever.\n");
    }
    return 0;
}


//Using while loop to create an infinite loop

#include <stdio.h>
int main() {
    while(1) {
        printf("This loop will run forever.\n");
    }
    return 0;
}


//Using do while loop to create an infinite loop

#include <stdio.h>
int main() {
    do {
        printf("This loop will run forever.\n");
    } while(1);
    return 0;
}


#include<stdio.h>
int main(){
    for (int i = 0; i >= 0; i++) {
        printf("This loop will run forever.\n");
    }
}

#include <stdio.h>
int main() {
    int i = 0;
    while (i >= 0) {
        printf("This loop will run forever.\n");
        i++;
    }
    return 0;
}

#include <stdio.h>
int main() {
    int i = 0;
    do {
        printf("This loop will run forever.\n");
        i++;
    } while (i >= 0);
    return 0;
}