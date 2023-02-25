#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int waterkg = 0, b = 950;
	long double c = 3.0E-23;
	scanf("%d", &waterkg);
	printf("%lf %e", waterkg * b / c);

	return 0;
}