#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double g1;
double g2;

void input()
{
	printf("용매(g)?");
	scanf("%lf", &g1);
	printf("용질(g)?");
	scanf("%lf", &g2);

	printf("농도: %.2f %", (g2 / (g1 + g2)) * 100);
}

int main()
{
	input();
	return 0;
}