#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�������� ����
int year;
int month;
int fay;

void input()
{
	printf("��?");
	scanf("%f", &year);

	printf("��?");
	scanf("%f", &month);

	printf("��?");
	scanf("%f", &day);

	/*printf("�Է��� ��¥�� %f�� %f�� %f���Դϴ�.")*/
}

int main()
{
	input();

	printf("�Է��� ��¥�� %f�� %f�� %f���Դϴ�.", year, month, day);
	
	return 0;
}