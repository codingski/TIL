// 1월 1일부터 오늘까지 며칠이 지났는지 알려주는 프로그램. 2020.08.05

int i, month, day, sum, result;

int DayCounter(){

    for(i = 1; i < month; i++){
        if(i == 2){
            sum += 28;
        }
        else if(i == 8){
            sum += 31;
        }
        else if(((3 < i) && (i < 7)) % 2 == 0 || ((8 < i) && (i < 12)) % 2 == 1){
            sum += 30;
        }
        else if(((0 < i) && (i < 9)) % 2 == 1 || ((9 < i) && (i < 13)) % 2 == 0){
            sum += 31;
        }
    }

}

#include<stdio.h>
int main(void){

    printf("month: ");
    scanf("%d", &month);
    printf("day: ");
    scanf("%d", &day);

    DayCounter();

    result = sum + day;
    printf("result: %d", result);

    return 0;
}