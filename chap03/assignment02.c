#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int width;
int length;

void input()
{
	printf("������ ����?");
	scanf("%d", &width);

	printf("������ ����?");
	scanf("%d", &length);

	printf("���簢���� ����: %d\n", width * length);
	printf("���簢���� �ѷ�: %d\n", (width + length) * 2);

	return 0;
}

int main()
{
	input();

	return 0;
}