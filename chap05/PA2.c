#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double x;
	double y;

	printf("���� ��ǥ (x,y)?");
	scanf("%lf %lf", &x, &y);

	if (x > 0&& y > 0)
	{
		printf("1��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0&& y>0)
	{
		printf("2��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0&& y < 0)
	{
		printf("3��и鿡 �ֽ��ϴ�.");
	}
	else if (x > 0&& y < 0)
	{
		printf("4��и鿡 �ֽ��ϴ�.");
	}

	return 0;
}