// a program that computes the factorial of a number
#include <stdio.h>
int sum(int n);

int main() {

int number, result;
// taking input from the user
printf("Enter number: ");
scanf("%d", &number);

result = sum(number);
printf("%d factorial is = %d",number, result);
  return 0;
}
int sum(int n){
    if (n != 0)
    {
        return n + sum(n - 1);
    }
    else{
        return n;
    }
}