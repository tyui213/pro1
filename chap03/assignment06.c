#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double m2;

void input()
{
	printf("아파트의 면적(제곱미터)?");
	scanf("%lf", &m2);

	printf("%.2f 제곱미터 = %.2f 평", m2, m2 * 0.3025);
}

int main()
{
	input();

	return 0;
}