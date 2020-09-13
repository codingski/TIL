// 5개의 정수 중에서 최댓값과 최솟값의 위치를 출력하는 프로그램


#include<stdio.h>
#include<limits.h>
int main(void){
    int i, max, min, max_index, min_index;
    int array[5];
    max = 0;
    min = INT_MAX;
    for(i = 0; i < 5; i++){
        printf("Input %dst Number: ", i + 1);
        scanf("%d", &array[i]);

        if(max < array[i]){
            max = array[i];
            max_index = i;
        }
        if(min > array[i]){
            min = array[i];
            min_index = i;
        }
    }

    printf("MAXIMUM: %d  INDEX: %d \n", max, max_index);
    printf("MINIMUM: %d  INDEX: %d", min, min_index);

    return 0;

}