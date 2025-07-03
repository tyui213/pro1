#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double KRW;
double ExchangeRate;

void input()
{
	printf("KRW?");
	scanf("%d", &KRW);
	printf("원/달러 환율?");
	scanf("%d", &ExchangeRate);

	printf("KRW %d = USD %.2f", KRW, KRW / ExchangeRate);
}

int main()
{
	input();

	return 0;
}