#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double dollar;
double ExchangeRate;

void input()
{
	printf("USD?");
	scanf("%lf", &dollar); 
	printf("��/�޷� ȯ��?");
	scanf("%lf", &ExchangeRate);

	printf("USD %.2f = KRW %.2f", dollar, dollar * ExchangeRate);
}

int main()
{
	input();

	return 0;
}