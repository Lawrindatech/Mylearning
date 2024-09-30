#include <stdio.h>
#include <math.h>

int main(){
    int num;
    double raised;
    printf("Enter number: ");
    scanf("%d", &num);
     printf("The answer is: %.2lf", sqrt(num));

     raised = sqrt(num);
     printf("\nThe power of the number is: %.2lf", pow(num, raised));
     return 0;

}