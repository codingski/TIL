//화폐의 개수를 최소한으로 줄 수 있는 방법을 찾아주는 프로그램 (한국.ver)

    int bill, count, FiftyThousandWon, TenThousandWon, FiveThousandWon, OneThousandWon, FiveHundredWon, OneHundredWon, FiftyWon, TenWon;
    int counter(int bill){

        while(bill >= 50000)
        {   
            bill = bill - 50000;
            count = count + 1;
            FiftyThousandWon += 1;
        }

        while(bill >= 10000)
        {
            bill = bill - 10000;
            count = count + 1;
            TenThousandWon += 1;
        }

        while(bill >= 5000)
        {
            bill = bill - 5000;
            count = count + 1;
            FiveThousandWon += 1;
        }

        while(bill >= 1000)
        {
            bill = bill - 1000;
            count = count + 1;
            OneThousandWon += 1;
        }

            while(bill >= 500)
        {
            bill = bill - 500;
            count = count + 1;
            FiveHundredWon += 1;
        }

            while(bill >= 100)
        {
            bill = bill - 100;
            count = count + 1;
            OneHundredWon += 1;
        }

        while(bill >= 50)
        {
            bill = bill - 50;
            count = count + 1;
            FiftyWon += 1;
        }

            while(bill >= 10)
        {
            bill = bill - 10;
            count = count + 1;
            TenWon += 1;
        }

          return count;
    }

#include<stdio.h>
int main(void){

    printf("Money: ");
    scanf("%d", &bill);

    printf("Minimum Counter: %d \n",counter(bill));
    printf("50000: %d\n", FiftyThousandWon);
    printf("10000: %d\n", TenThousandWon);
    printf("5000: %d\n", FiveThousandWon);
    printf("1000: %d\n", OneThousandWon);
    printf("500: %d\n", FiveHundredWon);
    printf("100: %d\n", OneHundredWon);
    printf("50: %d\n", FiftyWon);
    printf("10: %d\n", TenWon);

    return 0;
}