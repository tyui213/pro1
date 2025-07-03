#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int lb;

void input()
{
	printf("¹«°Ô(ld)?");
	scanf("%d", &lb);

	printf("%d ld = %f kg", lb, lb * 0.45359237);

	return 0;
}

int main()
{
	input();

	return 0;
}