// 5개의 정수 중에서 짝수 최댓값과 홀수 최댓값을 구하는 프로그램. 2020. 08. 14

#include<stdio.h>
#include<limits.h>
int main(void){
    int i, even_max_index, odd_max_index;
    int even_max = INT_MIN;
    int odd_max = INT_MIN;
    int array[5];

    for(i = 0; i < 5; i++){
        printf("INPUT %dst NUMBER: ",i + 1);
        scanf("%d", &array[i]);

        if(even_max < array[i] && array[i] % 2 == 0){
            even_max = array[i];
            even_max_index = i;
        }
        if(odd_max < array[i] && array[i] % 2 == 1){
            odd_max = array[i];
            odd_max_index = i;
        }
    }

    printf("EVEN_MAX: %d  EVEN_MAX_INDEX: %d\n", even_max, even_max_index);
    printf("ODD_MAX: %d  ODD_MAX_INDEX: %d\n", odd_max, odd_max_index);

    return 0;
}
