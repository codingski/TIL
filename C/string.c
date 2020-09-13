//하나의 문자열 안의 글자수 세기

// #include<stdio.h>
// int main(void)
// {
//     char array[123];
//     gets(array);

//     int count = 0;
//     while(array[count] != '\0')
//     {
//         count++;
//     }

//     printf("입력한 문자열의 길이는 %d 입니다.", count);
//     printf("입력한 문자열은 %s 입니다.", array);

//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main(void)
{   
    // 문자열의 길이를 세는 함수 strlen()
    char array[5] = "love";
    printf("문자열의 길이: %d", strlen(array));

    //strlen 은 NULL을 기준으로 하기 때문에 배열의 크기에 문자열을 가득 채우면 오류가 생길 수 있음.

    // 문자열 비교함수 strcmp()
    // comparison1 과 comparison2 의 문자열을 비교할 때
    //만약 1이 앞에 있다면 -1 출력
    //1, 2과 동일하다면 0 출력
    //2가 앞에 있다면 1 출력.

    char comparison1[10] = "A";
    char comparison2[10] = "B";

    printf("%d", strcmp(comparison1, comparison2));


    // 문자열 복사

    char input[10] = "I Love You";
    char result[5] = "Love";
    strcpy(result, input);
    printf("문자열 복사: %s", result);

    return 0;

    
}