#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
�ۼ���: ������
�ۼ���: 0721
����6��: ������ �Է¹޾� ���� �������ͷ�,�������ʹ� ������ ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

void convert()
{
	double value; //����
	char unit; //����

	printf("����?");
	scanf("%lf %c", &value, &unit);

	if (unit == 'm' || unit == 'M')
	{
		double calculate = value * 0.3025;
		printf("%.2lf �������� == %.2lf ��\n", value, calculate);
	}
	else if (unit == 'p' || unit == 'P') 
	{
		double calculate2 = value * 3.305785;
		printf("%.2lf �� ==%.2lf ��������\n", value, calculate2);
	}
	else
	{
		printf("�߸��� ���� �Դϴ�.");
	}
}

int main()
{
	convert();

	return 0;
}