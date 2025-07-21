#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double kg;
double ms;

void input()
{
	printf("질량(kg)?");
	scanf("%lf", &kg);
	printf("속력(m/s)?");
	scanf("%lf", &ms);
	printf("운동에너지: %.2f J", 0.5 * kg * (ms * ms));
}

int main()
{
	input();
	return 0;
}
