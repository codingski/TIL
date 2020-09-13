#include<stdio.h>

int i, month, day, sum;
int getDays(int month, int day){

    for(i = 1; i < month; i++){
        if(i == 2){
            sum += 28;
        }
        else if(i % 2 == 1){
            sum += 31;
        }
        else if(i % 2 == 0){
            sum += 30;
        }
        else{
            printf("wrong Number");
        }
    }

    return sum + day;
}
int month, day, sum;

int main(void){
    scanf("%d", &month);
    scanf("%d", &day);
    
    printf("result is %d", getDays(month, day));
}