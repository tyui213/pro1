#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double m2;

void input()
{
	printf("����Ʈ�� ����(��������)?");
	scanf("%lf", &m2);

	printf("%.2f �������� = %.2f ��", m2, m2 * 0.3025);
}

int main()
{
	input();

	return 0;
}