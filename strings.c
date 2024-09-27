#include <stdio.h>

int main(){
    char fullName[50];
     printf("Type your fullname: ");

    //  it prints everything unlike the scanf
     fgets(fullName, sizeof(fullName), stdin);

     printf("Your fullname is %s", fullName);

    // Changing the first letter to X
     fullName[0] = 'X';

     printf("Your new name is %s", fullName);

    return 0;
}