#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4;
    // Allocate memory for 4 integers
    int* ages = (int*) malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ages == NULL) {
        printf("Memory cannot be allocated\n");
        return 0;
    }

    printf("Enter the ages of the people:\n");
    // Read ages from user input
    for (int i = 0; i < n; ++i) {
        scanf("%d", ages + i);
    }

    printf("Ages of the people:\n");
    // Print the ages
    for (int i = 0; i < n; i++) {
        printf("%d\n", *(ages + i));
    }

    // Reallocate memory to hold 6 integers
    n = 6;
    int* temp = realloc(ages, n * sizeof(int));
    // Check if memory reallocation was successful
    if (temp == NULL) {
        printf("Memory cannot be reallocated\n");
        free(ages);
        return 0;
    }
    ages = temp;

    // Add new ages
    ages[4] = 59;
    ages[5] = 60;

    printf("New ages:\n");
    // Print the new list of ages
    for (int i = 0; i < n; i++) {
        printf("%d\n", *(ages + i));
    }

    // Free the allocated memory
    free(ages);
    return 0;
}
