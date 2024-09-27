#include <stdio.h>

int main() {
  FILE *fptr;

  // Create a file on your computer (filename.txt)
  fptr = fopen("filename.txt", "r");
 char myString[100];

// Read the content and store it inside myString
while(fgets(myString, 100, fptr)){

// Print the file content
printf("%s", myString);
}

  // Close the file
  fclose(fptr);

  return 0;
}
