#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a;
int b;

void input()
{
	printf("밑변?");
	scanf("%d", &a);
	printf("높이?");
	scanf("%d", &b);

	printf("빗변의 길이: %lf", (a * a) + (b * b));
}

int main()
{
	input();
	return 0;
}