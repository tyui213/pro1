#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int kg;
int m;

void input()
{
	printf("질량(kg)?");
	scanf("%d", &kg);
	printf("위치(m)?");
	scanf("%d", &m);

	printf("위치에너지:%fJ", 9.8 * kg * m);
}

int main()
{
	input();
	return 0;
}