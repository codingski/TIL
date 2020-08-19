#include<stdio.h>
#define SIZE 5
struct student
{
    int number;
    char name[20];
    double grade;
};


int main(void){
    int i = 0;
    struct student list[SIZE];
    
    for(i = 0; i < 5; i++)
    {
        printf("%dst student's NUMBER: ", i + 1);
        scanf("%d", &list[i].number);
        printf("%dst student's NAME: ", i + 1);
        scanf("%s", &list[i].name);
        printf("%dst student's GRADE: ", i + 1);
        scanf("%lf", &list[i].grade);
    }
    printf("\n\n----------------------------\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%dst student's NUMBER: %d\n", i + 1, list[i].number);
        printf("%dst student's NUMBER: %s\n", i + 1, list[i].name);
        printf("%dst student's NUMBER: %.1lf\n\n", i + 1, list[i].grade);
    }
    return 0;
}
