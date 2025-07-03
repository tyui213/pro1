#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int width;
int length;

void input()
{
	printf("가로의 길이?");
	scanf("%d", &width);

	printf("세로의 길이?");
	scanf("%d", &length);

	printf("직사각형의 넓이: %d\n", width * length);
	printf("직사각형의 둘레: %d\n", (width + length) * 2);

	return 0;
}

int main()
{
	input();

	return 0;
}