#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double g;
double cm3;

void input()
{
	printf("����(g)?");
	scanf("%lf", &g);
	printf("����(��������Ƽ����)?");
	scanf("%lf", &cm3);

	printf("�е�: %lf", g / cm3);
}

int main()
{
	input();
	return 0;
}