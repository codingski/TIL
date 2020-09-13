// 시간 더하기 프로그램

int hour, minute, minuteAdd;

int /* void 도 됨*/ timecaculator(){
    minute = minute + minuteAdd;
    hour = hour + (minute / 60);
    minute = minute % 60;
    hour = hour % 24;

}



#include<stdio.h>
int main(void){

    printf("Input hour: ");
    scanf("%d", &hour);

    printf("Input Minute: ");
    scanf("%d", &minute);
    
    printf("Input minuteAdd: ");
    scanf("%d", &minuteAdd);

    timecaculator();

    printf("%dhour %dminute", hour, minute);

    return 0;
}