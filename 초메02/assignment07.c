#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input()
{

	char Size;
	int Quantity;

	printf("커피 사이즈(S,T,G)와 주문 수량?");
	scanf("%c %d", &Size, &Quantity);

	printf("%c 사이즈 %d잔을 주문합니다.", Size, Quantity);

	return 0;
}

int main()
{
	input();

	return 0;
}
