#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
작성자:최정민
작성일:0723
문제 2번:한변의 길이를 매개변수로 전달받아 정사각형의 넓이를 구하는 get_area_of_square 함수를
작성하시오 get_area_of_square 함수를 이용해서 입력받은 한변의 길이로 정사각형의 넓이를 구하는
프로그램을 작성하시오.
*/

double get_area_of_square(double side) {
	
	return side * side;
}

int main() 
{
    double side_length;
  
    printf("한 변의 길이? ");
    scanf("%lf", &side_length);

    double square_area = get_area_of_square(side_length);

    printf("정사각형의 면적: %.6f\n", square_area);

    return 0;
}