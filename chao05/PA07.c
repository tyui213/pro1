#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
작성자:최정민 
작성일:0721
문제 7번:전기요금은 기본요금과 월사용량에 의한 요금으로 계산되는데,실제로는 누진제가 적용되어
단계별로 적용되는기본요금과 월 사용량 요금이 달라진다. 다음의 누진제 요금표를 참고햐여 월 사용량
을 입력받아 전기 요금을 계산하는 프로글매을 작성하시오.
*/
void calculateElectricityBill()
{
	int monthlyUsage;
	double baseFee = 0;
	double energyChargy = 0;
	double totalBill = 0;

	printf("월 사용량 (kwh)?");
	scanf("%d", &monthlyUsage);

	if (monthlyUsage <= 200)
	{
		baseFee = 910.0;
		energyChargy = monthlyUsage * 93.3;
	}
	else if (monthlyUsage <= 400)
	{
		baseFee = 1600;
		energyChargy += 200 * 93.3;
		energyChargy += (monthlyUsage - 200) * 187.9;
	}
	else
	{
		baseFee = 7300;
		energyChargy += 200 * 93.3;
		energyChargy += 200 * 187.9;
		energyChargy += (monthlyUsage - 400) * 280.6;
	}

	totalBill = baseFee + energyChargy;

	printf("전기 요금 합계 : %lf원\n", totalBill);
	printf("-기본 요금 : %lf원\n", baseFee);
	printf("-전력량 요금: %lf 원\n", energyChargy);
}

int main()
{
	calculateElectricityBill();
	return 0;
}