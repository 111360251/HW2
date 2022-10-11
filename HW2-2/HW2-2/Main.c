#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n = 1;
	float a, i;
	printf("Sales Commission Calculator\n");
	while (n > 0)
	{
		printf("\n");
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &i);
		if (i == -1) break;
		a = (i*0.09 + 200);
		printf("Salary is: $%.2f", a);
		printf("\n");
	}

	system("pause");
	return 0;
}