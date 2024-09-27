#include <stdio.h>

int main(){
    int x, y, z;
   
    printf("Enter a number 1: ", x);
    scanf("%d", &x);

    printf("Enter a number 2: ", y);
    scanf("%d", &y);

     z = x * y;
    printf("Your answer is: %d * %d = %d\n",x, y, z);
    if (z%2==0){
        printf("Divisible by 2\n");
    }
    else {
        printf("Not divisible by 2");
    }
    return 0;



}