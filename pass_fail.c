/*writing a functin to determine if a 
student passed or failed*/
#include <stdio.h>

int main(){
    float passscore;
    char name[30];

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your score: ");
    scanf("%f", &passscore);

    if(passscore >= 50){
    printf("Congratulations, %s you passed", name);
    }
    else{
        printf("Sorry, %s you failed", name);
        }
        return 0;
}