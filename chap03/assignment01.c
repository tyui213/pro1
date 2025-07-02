#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int square;

void input()
{
	printf("한 변의 길이?");
	scanf("%d", &square);

	printf("직사각형의 넓이:%d\n", square * square);
	printf("직사각형의 둘레:%d\n", square * 4);

	return 0;
}

int main()
{
	input();

	return 0;
}
