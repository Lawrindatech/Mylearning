#include <stdio.h>
int main(){
    while (1)
    {
    
     int number;
      printf("Enter number: ");
      scanf("%d", &number);

      if (number > 0)
      {
        printf("Positive value");
        break;
      }
      if (number < 0 && number % 2 == 0)
      {
         printf("Negative even\n"); 
        continue;
      }
     printf("%d\n",number);
    }
    return 0;
      
}