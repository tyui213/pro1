#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double C;

void input()
{
	printf("È­¾¾¿Âµµ?");
	scanf("%lf", &C);

	printf("%.2f F = %.2f C", C, (C - 32) * 5 / 9);
}

int main()
{
	input();
	return 0;
}