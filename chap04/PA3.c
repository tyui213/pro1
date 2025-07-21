#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double g;
double cm3;

void input()
{
	printf("질량(g)?");
	scanf("%lf", &g);
	printf("부피(세제곱센티미터)?");
	scanf("%lf", &cm3);

	printf("밀도: %lf", g / cm3);
}

int main()
{
	input();
	return 0;
}