#include <stdio.h>

int main(){
    double salary = 70.00;
    double* ptr = &salary;

    printf("Your salary is %.2lf", *ptr);

    // new salary
     *ptr = salary * 2;
     printf("\nYour new salary is : %.2lf", *ptr);
    return 0;
}