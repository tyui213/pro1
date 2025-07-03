#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double inch;

void input()
{
	printf("±Ê¿Ã (inch)?");
	scanf("%lf", &inch);
	printf("%f inch = %f cm", inch, inch * 2.54);
}

int main()
{
	input();

	return 0;
}