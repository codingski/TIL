// 분노의  피라미드 찍기 완료. 4시간 소요. 야무지다. 뿌듯하다!!! 2020.08.03 오후 4:18
#include<stdio.h>
int main(void){
    int i, j, k;
    int N;
    printf("Input N: ");
    scanf("%d", &N);
    for(i=0; i < N; i++){
        for(k = 1; k + i < N; k++){
            printf(" ");
        }
        for(j = 0; j < (i * 2) - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}