#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int number;
float score;

void input()
{
    printf("��ȣ? ");
    scanf("%f", &number);

    printf("����? ");
    scanf("%f", &score);
}

int main()
{
    input();

    printf("%f �л��� ������ %f�Դϴ�.\n", number, score);

    return 0;
}
