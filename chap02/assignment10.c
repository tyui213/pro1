#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int number;

void input()
{
    printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n");

    printf("����? ");
    scanf("%i", &number);

    printf("8����: %#o\n", number);   
    printf("10����: %d\n", number);   
    printf("16����: %#x\n", number);  
}

int main()
{
    input();

    return 0;
}
