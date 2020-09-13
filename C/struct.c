// Make STUDENT_INFORMATION_STRUCT 2020. 08. 17

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    int id_number;
    char name[20];
    double grade;
};

int main(void){
    struct student who;
    char yourname[20];
    printf("Input ID_NUMBER: ");
    scanf("%d", &who.id_number);
    printf("Input NAME: ");
    scanf("%s", who.name);
    printf("Input GRADE: ");
    scanf("%lf", &who.grade);
    
    printf("*************\n");
    printf("Your ID: %d\n", who.id_number);
    printf("Your NAME: %s\n", who.name);
    printf("Your GRADE: %.1f\n", who.grade);

    return 0;
}