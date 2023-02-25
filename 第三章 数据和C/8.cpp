#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a1 = 2.0, a2 = 8.0, a3 = 2.0, a4 = 3.0, a = 0;
	scanf("%f", &a);
	a1 = a / a1, a2 = a2 * a, a3 = a2 * a3, a4 = a4 * a3;
	printf("%.2f %.2f %.2f %.2f", a1, a2, a3, a4);

	return 0;
}