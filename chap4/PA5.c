#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include<stdio.h>

int r;
int h;

void input()
{
	printf("반지름의 길이?");
	scanf("%d", &r);
	printf("높이?");
	scanf("%d", &h);

	printf("원기둥의 부피: %f", PI * r * r * h);
}

int main()
{
	input();
	return 0;
}