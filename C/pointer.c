// 포인터 학습

#include<stdio.h>
void swap(int *x, int *y)
{
    int temp;
    *x = temp;
    *y = *x;
    temp = *y;
}
int main(void)
{
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf("x = %d, y = %d", x, y);

    return 0;
}

//

#include <stdio.h>
int main(void){
    int x = 10;

    int *killer = &x;

    printf("%p \n", killer);
    printf("%p \n", &x);

    return 0;
}