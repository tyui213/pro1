#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float weight;

void input()
{
	printf("몸무게?");
	scanf("%f", &weight);

	printf("입력한 몸무게는 %.2f입니다.", weight);

	return 0;
}

int main()
{
	input();

	return 0;
}
