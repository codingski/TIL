// 반복함수를 이용하여 숫자 피라미드를 출력합니다.
// 반복함수같은 경우는 오직 for 문과 while 문으로 구성해야합니다.
// #include<stdio.h>
// int i, j;

// int print(int a){
//     for(i = 0; i < a; i++){
//         for(j = 0; j <= i; j++){
//             printf("%d", j + 1);
//         }
//         printf("\n");
//     }
// }

// int main(void){
//     int a;
//     printf("result: ");
//     scanf("%d", &a);

//     print(a);
//     return 0;
// }

#include<stdio.h>
int print(int count)
    {
        if(count == 0){
            return 0;
        }

        else{
            printf("COUNT~ \n");    
            print(count - 1);
        }

    }   

int main(void){
int number;
printf("input: ");
scanf("%d", &number);

print(number);
}