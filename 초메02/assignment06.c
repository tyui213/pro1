#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char size;

void input()
{
	printf("�� ������(S,M,L)?");
	scanf("%c", &size);

	printf("%c ����� �����߽��ϴ�.", size);

	return 0;
}

int main()
{
	input();

	return 0;
}