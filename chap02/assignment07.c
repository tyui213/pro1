#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input()
{

	char Size;
	int Quantity;

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����?");
	scanf("%c %d", &Size, &Quantity);

	printf("%c ������ %d���� �ֹ��մϴ�.", Size, Quantity);

	return 0;
}

int main()
{
	input();

	return 0;
}
