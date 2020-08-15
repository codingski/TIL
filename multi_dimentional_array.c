// 구구단을 이용하여 이차원 배열을 출력하기

#include<stdio.h>
int main(void)
{
    int i, j;
    int gugudan[9][9];
    
    for(i = 0; i < 9; i++)
    {
        printf("%d multiplication\n", i + 1);

            for(j = 0; j < 9; j++)
            {
                gugudan[i][j] = (i + 1) * (j + 1);
                printf("%d * %d = %d\n",i + 1, j + 1, gugudan[i][j]);
            }
    }
    
    return 0;
}

// 학생 점수의 총 합

#include<stdio.h>
int main(void){
    int i, j;
    int Eng_sum = 0, Math_sum = 0;
    int student[5][2];
    for(i = 0; i < 5; i++)
    {
        printf("Input %dst student's Eng, Math SCORE: ", i + 1);
        scanf("%d", &student[i][0]);
        scanf("%d", &student[i][1]);
        Eng_sum += student[i][0];
        Math_sum += student[i][1];
    }

    printf("Student's Eng TOTAL SCORE: %d \n", Eng_sum);
    printf("Student's Eng TOTAL SCORE: %d", Math_sum);
    
    return 0;
}
