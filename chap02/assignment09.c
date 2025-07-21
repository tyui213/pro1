//16진수정수를 입력받아 10진수로 출력하는 프로그램을 작성
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int number;

void input()
{
	printf("16진수는?");
	scanf("%x", &number);

	printf("16진수는 %x는 10진수로 %d입니다.", number, number);
}

int main()
{
	input();

	return 0;
}