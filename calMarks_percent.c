/*Program to accept marks and obtain total and percentage of marks*/
#include <stdio.h>

int main(){
    int sub1, sub2, sub3, sub4, sub5, sum;
    long int stuNum;
    float percentage, total = 500;

    printf("Enter student number: ");
    scanf("%ld", &stuNum);
    printf("Enter SUBJECT1 marks: ");
    scanf("%d", &sub1);
    printf("Enter SUBJECT2 marks: ");
    scanf("%d", &sub2);
    printf("Enter SUBJECT3 marks: ");
    scanf("%d", &sub3);
    printf("Enter SUBJECT4 marks: ");
    scanf("%d", &sub4);
    printf("Enter SUBJECT5 marks: ");
    scanf("%d", &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;

    percentage = ((float)sum / total)* 100;
    printf("====================================RESULT=============================");
    printf("\nSTUDENT NUMBER: %ld", stuNum);
    printf("\nTOTAL MARKS: %d", sum);
    printf("\nTOTAL PERCENTAGE: %.2f", percentage);


    return 0;


}