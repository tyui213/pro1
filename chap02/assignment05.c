#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float weight;

void input()
{
	printf("������?");
	scanf("%f", &weight);

	printf("�Է��� �����Դ� %.2f�Դϴ�.", weight);

	return 0;
}

int main()
{
	input();

	return 0;
}
