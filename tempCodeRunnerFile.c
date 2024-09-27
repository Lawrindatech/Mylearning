#include <stdio.h>
#include<conio.h>
int main(){

 char name[50];
 int marks,i,n;

 clrscr();
 printf("Enter number of students: ");
 scanf("%d",&n);

 FILE *fptr;
 fptr=(fopen("C:\\studen.txt","w"));

 if(fptr==NULL){
 printf("Error!");
 exit(1);
 }

 for(i=0;i<n;++i)
 {

 printf("For student%d\nEnter name: ",i+1);
 scanf("%s",name);
 printf("Enter marks: ");
 scanf("%d",&marks);
 fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
 }
 fclose(fptr);
 getch();
 return 0;
}