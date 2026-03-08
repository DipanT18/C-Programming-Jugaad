//Malloc is a function in C that is used to dynamically allocate memory on the heap. It takes a single argument, which is the size of the memory block to be allocated in bytes, and returns a pointer to the allocated memory. If the allocation fails, it returns NULL.

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));

    // Check if memory has been allocated successfully
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1; // Exit with error code
    }

    // Get the elements from the user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Print the elements
    printf("The entered integers are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(ptr);

    return 0; // Exit with success code
}