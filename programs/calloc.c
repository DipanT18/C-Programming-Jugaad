//Calloc is a function that allocates memory for an array of elements, initializes them to zero, and returns a pointer to the allocated memory. It takes two parameters: the number of elements and the size of each element.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int *ptr;
    char name[50], i;

    printf("Enter your name: ");
    scanf("%s", name);
    

    // Dynamically allocate memory using calloc()
    ptr = (char*)calloc(strlen(name) + 1, sizeof(int));

    // Check if memory has been allocated successfully
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1; // Exit with error code
    }

    // Print the name entered by the user
    printf("The entered name is: %s\n", name);

    // Free the allocated memory
    free(ptr);

    return 0; // Exit with success code
}