#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double x;
	double y;

	printf("점의 좌표 (x,y)?");
	scanf("%lf %lf", &x, &y);

	if (x > 0&& y > 0)
	{
		printf("1사분면에 있습니다.");
	}
	else if (x < 0&& y>0)
	{
		printf("2사분면에 있습니다.");
	}
	else if (x < 0&& y < 0)
	{
		printf("3사분면에 있습니다.");
	}
	else if (x > 0&& y < 0)
	{
		printf("4사분면에 있습니다.");
	}

	return 0;
}