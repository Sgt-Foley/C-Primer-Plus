#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void jolly(), deny();
int main()
{
	jolly();
	jolly();
	jolly();
	deny();

	return 0;
}

void jolly()
{
	printf("For he's a jolly good fellow!\n");
}

void deny()
{
	printf("which nobody can deny!");
}