#include <stdio.h>

int main(){
    int sum = 0; 

     for (int i = 1; i <= 100; i = i+2)
     {
        sum = sum + i;
     }
     printf("The sum of odd numbers from 1 to 100 is :%d", sum);
     return 0;
}