#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double n;
double m;

void input()
{
	printf("��(n)?");
	scanf("%lf", &n);
	printf("�̵��Ÿ�(m)?");
	scanf("%lf", &m);

	printf("���� ��:%.2f J", n * m);
}

int main()
{
	input();

	return 0;
}