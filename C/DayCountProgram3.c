#include<stdio.h>

int i, sum;

int getDays(int month, int day){

    for(i = 1; i < month; i++){
        if(i == 2){
            sum += 28;
        }

        else if((i < 7) && (i % 2 == 0) || (8 < i) && (i % 2 == 1)){
            sum += 30;
        }

        else{
            sum += 31;
        }
    }

    return sum + day;
}

int main(void){

    int month, day;

    printf("MONTH: ");
    scanf("%d", &month);
    printf("DAY: ");
    scanf("%d", &day);

    printf("RESULT: %d", getDays(month, day));

    return 0;
}