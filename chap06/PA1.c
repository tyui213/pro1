#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
작성자:최정민
작성일:0721
문제1번: 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는
get_perimeter 함수를 작성하시오. 함수를 이용해서 입력받은 가로, 세로의 길이로 
직사각형의 둘레를 구하는 프로그램을 작성하시오 
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

	printf("가로?");
	scanf("%lf", &input_height);

	printf("세로?");
	scanf("%lf", &input_width);

	double perimeterResult = get_perimeter(input_width, input_height);

	printf("직사각형의 둘레:%lf\n", perimeterResult);//60.0000표시 60으로 바꾸기 필요

	return 0;
}