#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double kg;
double ms;

void input()
{
	printf("����(kg)?");
	scanf("%lf", &kg);
	printf("�ӷ�(m/s)?");
	scanf("%lf", &ms);
	printf("�������: %.2f J", 0.5 * kg * (ms * ms));
}

int main()
{
	input();
	return 0;
}
