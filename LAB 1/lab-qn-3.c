/*
Store and retrieve the name of the students and obtained marks
in c programming in 1st semester using structure.
*/


#include <stdio.h>
#include <conio.h>

struct student{
    char name[30];
    float marks;
}s[100];

int main(){
    int nstudent;

    printf("Enter the number of students:");
    scanf("%d",&nstudent);

    printf("\nPlease enter the details for students:\n");
    printf("-----------------------------------\n");

    int start=1;
    for(int i=0;i<nstudent;i++){
        printf("Name %d: ",start);
        scanf("%s",&s[i].name);
        printf("\tMarks %d: ",start);
        scanf("%f",&s[i].marks);
        printf("\n");
        start++;
    }


    //Displaying the data:
    printf("\nDetails of students:\n");
    printf("-----------------------------------\n");

       for(int i=0;i<nstudent;i++){
        printf("Name: %s",s[i].name);
        printf("\n");
        printf("Marks: %.3f",s[i].marks);
        printf("\n\n");
    }

    return 0;
}
