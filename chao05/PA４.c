#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int year;

    printf("연도? ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d년은 윤년입니다.", year);
    }
    else if (year % 100 == 0) 
    {
        printf("%d년은 평년입니다.", year);
    }
    else if (year % 4 == 0) 
    {
        printf("%d년은 윤년입니다.", year);
    }
    else {
        printf("%d년은 평년입니다.", year);
    }

    return 0;
}