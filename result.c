#include <stdio.h>
void Grade(float marks, char *grade) {
    if(marks >= 80) {
        *grade = 'A';
    } else if (marks >= 65) {
        *grade = 'B';
    } else if (marks >= 60) {
        *grade = 'C';
    } else if (marks >= 55) {
        *grade = 'D';
    } else if (marks >= 45) {
        *grade = 'E';
    } else {
        *grade = 'F';
    }
}
int main(){
    char name[30],course[10], grade;
    float marks;

    printf("Enter your name: ");
    scanf("%s", name);
    //printf("Enter your marks: ");
    //scanf("%f", &marks);
    printf("Enter your course: ");
    scanf("%s", course);
     
    do {
        printf("Enter your marks (0-100): ");
        scanf("%f", &marks);
        if (marks < 0 || marks > 100) {
            printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
        }
    } while (marks < 0 || marks > 100);
        Grade(marks, &grade);
       printf("Dear %s from the %s class, your grade is \"%c\" ",name, course, grade);
     return 0;
}
