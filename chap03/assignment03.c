#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int kg;
int m;

void input()
{
	printf("����(kg)?");
	scanf("%d", &kg);
	printf("��ġ(m)?");
	scanf("%d", &m);

	printf("��ġ������:%fJ", 9.8 * kg * m);
}

int main()
{
	input();
	return 0;
}