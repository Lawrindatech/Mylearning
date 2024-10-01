// C Program to demonstrate Printing 
// of the first letter 
// of each word using strtok() 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
   char str[100]; 
   printf("Input to get initials: ");
   fgets(str, sizeof(str), stdin);

	// This will give first word of String. 
	char* ptr = strtok(str, " "); 
	
	while (ptr != NULL) { 
		
		// This will print first character of word. 
		printf("%c ", ptr[0]); 
		
		// To get next word. 
		ptr = strtok(NULL, " "); 
	} 
}
