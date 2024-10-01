#include <stdio.h>

int main(){
    int number;
     printf("Enter your number: ");
     scanf(" %d", &number);

     if (number > 0)
     {
       printf("%d is a positive number", number);
     }
     else if (number < 0)
     {
        printf("%d is a negative number", number);
     }
     else printf("The number is 0");



     return 0;
     
}
