#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ActualNumber;

void input()
{
	printf("�Ǽ�?");
	scanf("%lf", &ActualNumber);

	printf("����: %e\n", ActualNumber * ActualNumber);
	printf("����: %e\n", ActualNumber * ActualNumber * ActualNumber);
	
	return 0;
}

int main()
{
	input();

	return 0;
}