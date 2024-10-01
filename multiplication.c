#include <stdio.h>

int main(){
    int number;
    int count;

    printf("Enter number: ");
    scanf("%d", &number);
     
     count = 1;
     while (count <= 12)
     {
        int product = number * count;
        printf("%d * %d = %d\n", number, count, product );
        count = count + 1;
     }
     return 0;
}