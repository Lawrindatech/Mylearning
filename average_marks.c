#include <stdio.h>

int main(){
    int marks []= {40, 70, 75, 50, 60};
    int sum = 0;
     // Initialize sum to 0

    for (int i = 0; i < 5; i++) {
        sum += marks[i]; // Accumulate the sum
    }

    printf("Total marks = %d\n", sum); // Print the total sum
    int average = sum/5;
     printf("Average marks = %d\n",average);

    return 0;
}
