#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
�ۼ���:������
�ۼ���:0723
���� 2��:�Ѻ��� ���̸� �Ű������� ���޹޾� ���簢���� ���̸� ���ϴ� get_area_of_square �Լ���
�ۼ��Ͻÿ� get_area_of_square �Լ��� �̿��ؼ� �Է¹��� �Ѻ��� ���̷� ���簢���� ���̸� ���ϴ�
���α׷��� �ۼ��Ͻÿ�.
*/

double get_area_of_square(double side) {
	
	return side * side;
}

int main() 
{
    double side_length;
  
    printf("�� ���� ����? ");
    scanf("%lf", &side_length);

    double square_area = get_area_of_square(side_length);

    printf("���簢���� ����: %.6f\n", square_area);

    return 0;
}