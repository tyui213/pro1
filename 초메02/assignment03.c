#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//전역변수 선언
int year;
int month;
int fay;

void input()
{
	printf("연?");
	scanf("%f", &year);

	printf("달?");
	scanf("%f", &month);

	printf("일?");
	scanf("%f", &day);

	/*printf("입력한 날짜는 %f년 %f월 %f일입니다.")*/
}

int main()
{
	input();

	printf("입력한 날짜는 %f년 %f월 %f일입니다.", year, month, day);
	
	return 0;
}