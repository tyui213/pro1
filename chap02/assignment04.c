#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int hour;
int minute;
int second;

void input()
{
	printf("��?");
	scanf("%d", &hour);
	printf("��?");
	scanf("%d", &minute);
	printf("��?");
	scanf("%d", &second);

	printf("�Է��� �ð��� 0%d:0%d:0%d�Դϴ�.",hour, minute, second);//������ �ٽ� Ǯ��
}

int main()
{
	input();
	return 0;
}