#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char size;

void input()
{
	printf("옷 사이즈(S,M,L)?");
	scanf("%c", &size);

	printf("%c 사이즈를 선택했습니다.", size);

	return 0;
}

int main()
{
	input();

	return 0;
}