#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a;
int b;

void input()
{
	printf("�غ�?");
	scanf("%d", &a);
	printf("����?");
	scanf("%d", &b);

	printf("������ ����: %lf", (a * a) + (b * b));
}

int main()
{
	input();
	return 0;
}