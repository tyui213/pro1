#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include<stdio.h>

int r;
int h;

void input()
{
	printf("�������� ����?");
	scanf("%d", &r);
	printf("����?");
	scanf("%d", &h);

	printf("������� ����: %f", PI * r * r * h);
}

int main()
{
	input();
	return 0;
}