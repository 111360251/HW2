#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n = 1, i;
	float a, b = 0, c = 0, d;
	printf("Interest Calculator \n");
	while (n > 0)
	{
		printf("\n");
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &i);
		if (i == -1) break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &a);
		if (i <= 40)
		{
			b = i * a;
			printf("Salary is $%.2f", b);
		}
		else
		{
			c = i - 40;
			d = a * 1.5;
			b = ((c*d) + (i - c)*a);
			printf("Salary is $%.2f", b);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}