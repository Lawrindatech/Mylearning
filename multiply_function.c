#include <stdio.h>

int* multiplyNum(int* num1, int* num2, int* product){
    *product = *num1 * *num2;
    return product;
}
int main(){
    int number1 = 13;
    int number2 = 9;
    int product;

    int* result = multiplyNum(&number1, &number2, &product );

    printf("The answer is %d", *result);
    return 0;
}