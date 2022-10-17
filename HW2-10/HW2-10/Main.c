#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, j, a, b;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5 - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 7; j >= i * 2 - 1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}