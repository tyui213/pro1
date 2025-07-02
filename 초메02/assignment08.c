//실수 2개를 입력 받아서 합과 차를 구해서 출력하는 프로그램 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double RealIncome1;
double RealIncome2;

void input()
{
	printf("실수 2개?");
	scanf("%lf %lf", &RealIncome1, &RealIncome2);

	return 0;
}

void result()
{
	printf("%lf + %lf = %lf\n", RealIncome1, RealIncome2, RealIncome1 + RealIncome2);
	printf("%lf - %lf = %lf\n", RealIncome1, RealIncome2, RealIncome1 - RealIncome2);
}

int main()
{
	input();
	result();

	return 0;
}
