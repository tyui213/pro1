#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int year;

    printf("����? ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d���� �����Դϴ�.", year);
    }
    else if (year % 100 == 0) 
    {
        printf("%d���� ����Դϴ�.", year);
    }
    else if (year % 4 == 0) 
    {
        printf("%d���� �����Դϴ�.", year);
    }
    else {
        printf("%d���� ����Դϴ�.", year);
    }

    return 0;
}