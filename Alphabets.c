#include <stdio.h>

int main(){
    int i;

    // ASCII value of A= 65 and Z=90
    printf("Letters of alphabet from A - Z\n");
    for (int i = 65; i <= 90; i++)
    {
       printf("%c ", i);
    }

     // ASCII value of a= 97 and z=122
    printf("\nLetters of alphabet from a - z\n");
    for (int i = 97; i <= 122; i++)
    {
       printf("%c ", i);
    }
    return 0;
}