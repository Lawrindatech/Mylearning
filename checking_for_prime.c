#include <stdio.h>

int checkPrime(int n){

    if (n<= 1)
    {
        return 0;
    }
    
    for (int i = 2; i < n; i++)
    {
       if (n % i == 0){
       return 0;
       }
    }
        return 1;
}

// Main code
int main(){
    int n;

    printf("Enter number: ");
    scanf("%d", &n);
    checkPrime(n);

    if (checkPrime(n))
    printf("Prime number");
    else{
        printf("Not prime number");
    }
    return 0;

}
