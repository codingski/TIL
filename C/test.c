#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void){
    int i = 0;
    int n;
    int b = 0;
    printf("INPUT: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i++)
    {
        if(n / i > 0)
        {
            printf("%d", n);
        }
    }

    return 0;
}