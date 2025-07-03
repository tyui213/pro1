#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int yd;

void input()
{
	printf("±Ê¿Ã(yd)?");
	scanf("%d", &yd);

	printf("%d yd = %f m", yd, yd * 0.9144);

	return 0;
}

int main()
{
	input();

	return 0;
}