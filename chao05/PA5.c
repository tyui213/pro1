#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*�ۼ��� : ������
����: �µ��� �Է¹޾� �����µ��� ȭ���µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�
��¥: 0721*/


void GetTemperature()
{
	double temperature;
	char CF;

	printf("�µ�?");
	scanf("%lf %c", &temperature, &CF);

	if (CF == 'C' || CF == 'c')
	{
		double fahrenhrit = (temperature * 9 / 5) + 32;
		printf("%.2lf C ==> %.2lf F\n", temperature, fahrenhrit);
	}
	else if (CF == 'F' || CF == 'f')
	{
		double celsius = (temperature - 32) * 5 / 9;
		printf("%.2lf F ==> %.2lf C\n", temperature, celsius);
	}
	else
	{
		printf("�߸��� �µ� �����Դϴ�.");
	}
}

int main()
{
	GetTemperature();

	return 0;
}
