#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i, j;
	printf("(a)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j < i + 1; j++)
			printf("%s", "*");
		printf("\n");
	}
	printf("\n");
	printf("(b)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j > i - 1; j--)
			printf("%s", "*");

		printf("\n");
	}
	printf("\n");
	printf("(c)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
			if (j < i)		printf(" ");
			else		printf("%s", "*");
		printf("\n");
	}
	printf("\n");
	printf("(d)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= 1; j--)
			if (j > i)		printf(" ");
			else		printf("%s", "*");
		printf("\n");
	}


	system("pause");
	return 0;
}