#include <stdio.h>

int main(){
    FILE* fptr;

    fptr = fopen("myfile.txt", "w");

    fputs("C is a fun language\n", fptr);
    fputs("And I love using C language", fptr);
    fclose(fptr);

    fptr = fopen("myfile.txt", "r");

    char content[1000];

    if (fptr != NULL)
    {
       while (fgets(content, 1000, fptr))
       {
        printf("%s", content);
       }
       
    }
    else
    {
        printf("File open unsuccessful");
    }
    fclose(fptr);

    

    return 0;

}