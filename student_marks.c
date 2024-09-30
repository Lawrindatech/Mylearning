#include <stdio.h>
#include <stdlib.h>

void calculateGrade(float marks, char *grade) {
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

int main() {
    int numStudents, i;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    FILE *file = fopen("students_marks.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < numStudents; i++) {
        char name[30], course[10], grade;
        float marks;

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks);
        printf("Enter course of student %d: ", i + 1);
        scanf("%s", course);

        calculateGrade(marks, &grade);

        printf("Dear %s from the %s class, your grade is: \"%c\"\n", name, course, grade);
        fprintf(file,"Name  : %s\n", name);
        fprintf(file,"Course: %s\n",course);
        fprintf(file,"Marks : %.2f\n",marks);
        fprintf(file,"Grade : %c\n",grade);
    }

    fclose(file);
    printf("Student data has been saved to students_marks.txt\n");

    return 0;
}
