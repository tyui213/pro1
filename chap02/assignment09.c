//16���������� �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int number;

void input()
{
	printf("16������?");
	scanf("%x", &number);

	printf("16������ %x�� 10������ %d�Դϴ�.", number, number);
}

int main()
{
	input();

	return 0;
}