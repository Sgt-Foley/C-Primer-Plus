#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float number = 0;
	printf("Enter a floating-point value:");
	scanf("%f", &number);
	printf("fixed-piont notation: %f\n", number);
	printf("exponential notation: %e\n", number);
	printf("p notation:%a\n", number);

	return 0;
}