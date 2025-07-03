#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double n;
double m;

void input()
{
	printf("힘(n)?");
	scanf("%lf", &n);
	printf("이동거리(m)?");
	scanf("%lf", &m);

	printf("일의 양:%.2f J", n * m);
}

int main()
{
	input();

	return 0;
}