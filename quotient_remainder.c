// C program to find quotient
// and remainder of two numbers
#include <stdio.h>

// Driver code
int main()
{
	int A, B, quotient = 0, remainder = 0;

	// Ask user to enter the two numbers
	printf("Enter two numbers A and B : \n");

	scanf("%d%d", &A, &B);

	// Calculate the quotient of A and B using '/' operator
	quotient = A / B;

	// Calculate the remainder of A and B using '%' operator
	remainder = A % B;

	// Print the result
	printf("Quotient when %d/%d is: %d\n",A, B, quotient);
	printf("Remainder when %d/%d is: %d", A, B, remainder);

	return 0;
}
