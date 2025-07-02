#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265
#include <stdio.h>

void input()
{
	printf("pi = %.2lf\n", PI);
	printf("pi = %.4lf\n", PI);
	printf("pi = %.6lf\n", PI);
	printf("pi = %.8lf\n", PI);
	printf("pi = %e\n", PI); 
}
int main()
{
	input();

	return 0;
}