#include <stdio.h>



int main(){
    int number;
    
    printf("Enter number: ");
    scanf("%d", &number);

    (number %2 == 0)? 
    printf("The number is even") : 
    printf("The number is odd");
    return 0;
