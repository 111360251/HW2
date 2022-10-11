#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n = 1;
	float a, b, c, i;
	printf("Interest Calculator \n");
	while (n > 0)
	{
		printf("\n");
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &i);
		if (i == -1) break;
		printf("Enter interest rate:");
		scanf_s("%f", &a);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &b);
		c = (i*a*b) / 365;
		printf("The interest charge is $%.2f", c);
		printf("\n");
	}

	system("pause");
	return 0;
}