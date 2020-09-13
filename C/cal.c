// 정수의 갯수의 따른 값을 계산

// #include<stdio.h>
// int main(void){

//     int number, a, b, sum = 0;

//     printf("How many?: ");
//     scanf("%d",&number);

//     for(a = 0; a < number; a++){
//         printf("enter your number: ");
//         scanf("%d",&b);
//         sum += b;
//     }
    
//     printf("final is %d",sum);



//     return 0;
// }

// 구구단 만들기
#include<stdio.h>
int main(void){
    int x, y;

    printf("원하시는 구구단 숫자를 입력하시오.: ");
    scanf("%d",&x);

    for(y = 1; y < 10; y++){
        printf("%d * %d = %d \n",x, y, x * y);
    }
}