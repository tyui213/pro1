#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int square;

void input()
{
	printf("�� ���� ����?");
	scanf("%d", &square);

	printf("���簢���� ����:%d\n", square * square);
	printf("���簢���� �ѷ�:%d\n", square * 4);

	return 0;
}

int main()
{
	input();

	return 0;
}
