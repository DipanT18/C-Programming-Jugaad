//Realloc is used to change the size of a previously allocated memory block. It takes a pointer to the previously allocated memory and the new size as arguments. If the new size is larger than the old size, realloc will allocate a new block of memory and copy the contents of the old block to the new block. If the new size is smaller than the old size, realloc will simply reduce the size of the existing block. If realloc fails to allocate memory, it returns NULL.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));

    // Check if memory has been allocated successfully
    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1; // Exit with error code
    }

    // Get the elements from the user
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Print the elements
    printf("The entered integers are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");


    // Reallocate memory to hold more elements
    printf("Enter the new number of elements: ");
    scanf("%d", &n);
    ptr = (int*)realloc(ptr, n * sizeof(int));

    // Check if memory has been reallocated successfully
    if(ptr == NULL) {
        printf("Memory not reallocated.\n");
        return 1; // Exit with error code
    }
    // Get the new elements from the user
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    // Print the new elements
    printf("The entered integers are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

return 0; // Exit with success code
}