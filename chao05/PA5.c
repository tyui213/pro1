#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*작성자 : 최정민
내용: 온도를 입력받아 섭씨온도는 화씨온도로 변환하는 프로그램을 작성하시오
날짜: 0721*/


void GetTemperature()
{
	double temperature;
	char CF;

	printf("온도?");
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
		printf("잘못된 온도 단위입니다.");
	}
}

int main()
{
	GetTemperature();

	return 0;
}
