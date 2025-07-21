#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
작성자: 최정민
작성일: 0721
문제6번: 면적을 입력받아 평은 제곱미터로,제곱미터는 평으로 변환하는 프로그램을 작성하시오.
*/

void convert()
{
	double value; //면적
	char unit; //단위

	printf("넓이?");
	scanf("%lf %c", &value, &unit);

	if (unit == 'm' || unit == 'M')
	{
		double calculate = value * 0.3025;
		printf("%.2lf 제곱미터 == %.2lf 평\n", value, calculate);
	}
	else if (unit == 'p' || unit == 'P') 
	{
		double calculate2 = value * 3.305785;
		printf("%.2lf 평 ==%.2lf 제곱미터\n", value, calculate2);
	}
	else
	{
		printf("잘못된 단위 입니다.");
	}
}

int main()
{
	convert();

	return 0;
}