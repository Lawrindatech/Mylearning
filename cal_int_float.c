#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int number1, number2;
    float first, second;

    printf("Enter two integers\n");
    scanf("%d %d", &number1, &number2);

    printf("Enter two decimals\n");
    scanf("%f %f", &first, &second);

    printf("%d ", number1 + number2);
    printf("%d\n", number1 - number2);
    printf("%.1f ", first+ second);
    printf("%.1f", first- second);
   
    
    return 0;
}