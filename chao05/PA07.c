#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
�ۼ���:������ 
�ۼ���:0721
���� 7��:�������� �⺻��ݰ� ����뷮�� ���� ������� ���Ǵµ�,�����δ� �������� ����Ǿ�
�ܰ躰�� ����Ǵ±⺻��ݰ� �� ��뷮 ����� �޶�����. ������ ������ ���ǥ�� �����Ῡ �� ��뷮
�� �Է¹޾� ���� ����� ����ϴ� ���α۸��� �ۼ��Ͻÿ�.
*/
void calculateElectricityBill()
{
	int monthlyUsage;
	double baseFee = 0;
	double energyChargy = 0;
	double totalBill = 0;

	printf("�� ��뷮 (kwh)?");
	scanf("%d", &monthlyUsage);

	if (monthlyUsage <= 200)
	{
		baseFee = 910.0;
		energyChargy = monthlyUsage * 93.3;
	}
	else if (monthlyUsage <= 400)
	{
		baseFee = 1600;
		energyChargy += 200 * 93.3;
		energyChargy += (monthlyUsage - 200) * 187.9;
	}
	else
	{
		baseFee = 7300;
		energyChargy += 200 * 93.3;
		energyChargy += 200 * 187.9;
		energyChargy += (monthlyUsage - 400) * 280.6;
	}

	totalBill = baseFee + energyChargy;

	printf("���� ��� �հ� : %lf��\n", totalBill);
	printf("-�⺻ ��� : %lf��\n", baseFee);
	printf("-���·� ���: %lf ��\n", energyChargy);
}

int main()
{
	calculateElectricityBill();
	return 0;
}