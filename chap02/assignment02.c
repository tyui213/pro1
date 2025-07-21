#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int number;
float score;

void input()
{
    printf("번호? ");
    scanf("%f", &number);

    printf("학점? ");
    scanf("%f", &score);
}

int main()
{
    input();

    printf("%f 학생의 학점은 %f입니다.\n", number, score);

    return 0;
}
