#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int hour;
int minute;
int second;

void input()
{
	printf("시?");
	scanf("%d", &hour);
	printf("분?");
	scanf("%d", &minute);
	printf("초?");
	scanf("%d", &second);

	printf("입력한 시간은 0%d:0%d:0%d입니다.",hour, minute, second);//다음날 다시 풀기
}

int main()
{
	input();
	return 0;
}