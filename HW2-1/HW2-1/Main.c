#include <stdio.h> 
#include <stdlib.h>

int main()
{
	int i, n = 1;
	float a, b, c, d, e, f;
	printf("Credit Limit Calculator\n");
	do
	{
		printf("\n");
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &i);
		if (i == -1) break;
		printf("Enter beginning balance:");
		scanf_s("%f", &a);
		printf("Enter total charges:");
		scanf_s("%f", &b);
		printf("Enter total credits:");
		scanf_s("%f", &c);
		printf("Enter credit limit:");
		scanf_s("%f", &d);
		e = a + c;
		if (e > d)
		{
			printf("Account:%d\n", i);
			printf("Credit limit:%.2f\n", d);
			printf("Balance:%.2f\n", e);
			printf("Credit Limit Exceeded.\n");
			printf("\n");
		}
	} while (n > 0);

	system("pause");
	return 0;
}