#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ActualNumber;

void input()
{
	printf("½Ç¼ö?");
	scanf("%lf", &ActualNumber);

	printf("Á¦°ö: %e\n", ActualNumber * ActualNumber);
	printf("Á¦°ö: %e\n", ActualNumber * ActualNumber * ActualNumber);
	
	return 0;
}

int main()
{
	input();

	return 0;
}