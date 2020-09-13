// #include<stdio.h>
// int main(void){
    /*
    const int year = 1997;
    printf("%d\n", year);
    int add = 7 + 10;
    printf("%d + %d = %d", 3, 6, 3+6);
    return 0;
    */


    // int a;
    // printf("enter your number: ");
    // scanf("%d", &a);
    // printf("your number is : %d\n", a);


    // int a, b, c;
    // printf("enter three number: ");
    // scanf("%d %d %d",&a, &b, &c);
    // printf("your first number is %d\n",a);
    // printf("your first number is %d\n",b);
    // printf("your first number is %d\n",c);
    // return 0;

    // 문자(한글자), 문자열(한글자 이상의 여러글자)

    // int input;
    // const int second_per_minute = 60;
    // printf("input your number: ");
    // scanf("%d", &input);
    // int minute = input / second_per_minute;
    // int second = input % second_per_minute;
    // printf("%d is %dminute %dsecond", input, minute, second);  
    // return 0;   
    
// }


// #include<stdio.h>
// int main(void){
//     int x = 50, y = 30;
//     printf("x가 y보다 크고 y가 40 미만입니까? %d\n", (x > y) && (y < 40));
//     printf("x가 y보다 작거나 혹은 y가 40 미만입니까? %d\n", (x < y) || (y < 40));
//     printf("x 는 50이 아닙니까? %d\n", x != 50);
//     return 0;
// }


//절댓값
// #include<stdio.h>
// int main(void){
//     int x = -30, y = 50;
//     int AbsoluteX = (x > 0) ? x : -x;
//     int Max = (x > y) ? x : y;
//     int Min = (x < y) ? x : y;

//     printf("x의 절댓값은 %d\n", AbsoluteX);
//     printf("x, y의 최대값은 %d\n", Max);
//     printf("x, y의 최소값은 %d\n", Min);
//     return 0;
// }

//거듭제곱 연산자
// #include<stdio.h>
// #include<math.h>
// int main(void){
//     double x = pow(2.0 , 20.0);
//     printf("2의 20제곱은 %.0f \n", x);
//     return 0;
// }

// #include<stdio.h>
// int main(void){
//     int x = -50;
//     if(x < 0){
//         x = -x;
//     }
//     printf("%d", x);

//     return 0;
// }

// #include<stdio.h>
// int main(void){
//     int score = 50; //학생의 점수

//     if(score >= 90){
//         printf("Your score is A!!\n");
//     }
//     else if(score >= 80){
//         printf("Your score is B!!\n");
//     }
//     else if(score >= 70){
//         printf("Your score is C!!\n");
//     }
//     else{
//         printf("Your score is F\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(void){
//     /*
//     윤년 -> 4년마다, 그렇지만 100년 단위일때는 윤년에 해당 x
//             400년 단위일때는 어떠한 경우라도 윤년
//     */
    

//     int year = 400;
//     if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//     {
//         printf("%d is correct \n", year);
//     }
//     else
//     {
//         printf("%d is incorrect\n");
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(void){
//     int i = 1, sum = 0;

//     while(i <= 1000){
//         sum = sum + i;
//         i++;
//         printf("%d\n", sum);
//     }
//     return 0;
// }


// #include<stdio.h>
// #define N 10
// int main(void){
//     int i, j;
//     for(i = 0; i < N; i++){
//         for(j = 0; j < N; j++){
//             printf("*");
//         }   
//         printf("\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// #define N 10
// int main(void){
//     int i, j;
//     for(i = 0; i < N; i++){
//         for(j = 0; j < i; j++){
//         printf("*");
//         }
//         printf("\n");
//     }
// }


//피라미드 가즈아~

// #include<stdio.h>
// int main(void){
//     int i, j, k;
//     int N = 6;
//     for(i = 0; i < N; i++){
//         for(j = 0; j < i; j++){
//             for(k = j; (0 < N-k); k++){
//                 printf(" ");
//             }
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

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


// #include<stdio.h>
// int main(void){
//     int i, j;
//     int N = 5;
//     for(i = 0; i < N; i++){
//         for(j = 0; j + i < N; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }