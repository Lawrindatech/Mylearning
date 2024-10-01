// C program to reverse a string 
// using recursion
# include <stdio.h>

// Function to print reverse of 
// the passed string 
void reverse(char *str)
{
if (*str)
{
	reverse(str + 1);
	printf("%c", *str);
}
}


int main()
{
	char a[20];
	printf("Enter what you want to reverse: ");
    scanf("%s", &a);
    printf("The reversed is: ");

	reverse(a);
	return 0;
}
