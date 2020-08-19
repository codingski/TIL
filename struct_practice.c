// 사각형의 넓이와 둘레를 구하는 프로그램. 2020. 8. 19
#include<stdio.h>
#include<stdlib.h>
struct point{
    int x, y;
};

struct rectangle{
    struct point p1;
    struct point p2;
};

int main(void){

    struct rectangle i;

    int length, width, area, perimeter;
    printf("First point:");
    scanf("%d %d", &i.p1.x, &i.p1.y);
    printf("Second point:");
    scanf("%d %d", &i.p2.x, &i.p2.y);

    length = abs(i.p1.x - i.p2.x);
    width = abs(i.p1.y - i.p2.y);

    area = length * width;
    perimeter = (length * 2) + (width * 2);
    
    printf("AREA: %d  PERIMETER: %d", area, perimeter);

    return 0;
}
