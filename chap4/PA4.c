#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double g1;
double g2;

void input()
{
	printf("���(g)?");
	scanf("%lf", &g1);
	printf("����(g)?");
	scanf("%lf", &g2);

	printf("��: %.2f %", (g2 / (g1 + g2)) * 100);
}

int main()
{
	input();
	return 0;
}