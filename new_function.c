#include <stdio.h>

int multiply(int number1, int number2){
int product = number1 * number2;
return product;
}

int main(){
   int ans = multiply(4,6);
    printf("The answer is: %d", ans);
    return 0;
}