// 시간 더하기 프로그램

int hour, minute, second, hourAdd, minuteAdd, secondAdd;

int /* void 도 됨*/ timecaculator(){
    
    second = second + secondAdd;
    minute = minute + minuteAdd + second / 60;
    second = second % 60;
    hour = hour +  hourAdd + (minute / 60);
    minute = minute % 60;

}



#include<stdio.h>
int main(void){

    printf("Input hour: ");
    scanf("%d", &hour);

    printf("Input minute: ");
    scanf("%d", &minute);

    printf("Input second: ");
    scanf("%d", &second);


    printf("\nInput hourAdd: ");
    scanf("%d", &hourAdd);    

    printf("Input minuteAdd: ");
    scanf("%d", &minuteAdd);

    printf("Input secondAdd: ");
    scanf("%d", &secondAdd);

    timecaculator();

    printf("\n*RESULT*\n%d hour\n%d minute\n%d second\n\n", hour, minute, second);

    return 0;
}