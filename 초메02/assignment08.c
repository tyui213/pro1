//�Ǽ� 2���� �Է� �޾Ƽ� �հ� ���� ���ؼ� ����ϴ� ���α׷� 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double RealIncome1;
double RealIncome2;

void input()
{
	printf("�Ǽ� 2��?");
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
