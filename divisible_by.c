#include <stdio.h>
void main( )
{
 int a;
 printf("Enter a number...");
 scanf("%d", &a);
 if(a%5 == 0 && a%8 == 0)
 {
 printf("Divisible by both 5 and 8");
 }
 else if(a%8 == 0)
 {
 printf("Divisible by 8");
 }
 else if(a%5 == 0)
 {
 printf("Divisible by 5");
 }
 else
 {
 printf("Divisible by none");
 }

}
