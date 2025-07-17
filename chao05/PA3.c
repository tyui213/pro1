#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int money;

int main()
{
	printf("거스름돈?");
	scanf("%d", &money);
	
	printf("거스름돈 (10원미만 절사): %d", money);

	if (money > 50000)
	{
		printf("50000원 :")
	}
}