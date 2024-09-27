#include <stdio.h>

typedef struct subt_complexnum
{
   double real;
   double imagine;
} complex;

int main(){
    complex c1 = {.real = 34.55, .imagine = 78.99};
    complex c2 = {.real = 45.77, .imagine = 65.43};

    complex subt;

    subt.real = c1.real - c2.real;
    subt.imagine = c1.imagine - c2.imagine;

    printf("Result is %.2lf - %.2lfi", subt.real, subt.imagine);
    return 0;
}
