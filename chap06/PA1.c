#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
�ۼ���:������
�ۼ���:0721
����1��: ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ�
get_perimeter �Լ��� �ۼ��Ͻÿ�. �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� 
���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ� 
*/

double  get_perimeter(double width, double height)
{
	double perimeter = 2 * (width + height);
	return perimeter;
}

double main()
{
	double input_width;
	double input_height;

	printf("����?");
	scanf("%lf", &input_height);

	printf("����?");
	scanf("%lf", &input_width);

	double perimeterResult = get_perimeter(input_width, input_height);

	printf("���簢���� �ѷ�:%lf\n", perimeterResult);//60.0000ǥ�� 60���� �ٲٱ� �ʿ�

	return 0;
}