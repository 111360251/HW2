#include <stdio.h>
#include <stdlib.h>


int main()
{
	char sign2 = ' ', sign = '+';
	int b, a, i, j;
	printf("請輸入你要的長度:");
	scanf_s("%d", &i);
	printf("請輸入你要的寬度:");
	scanf_s("%d", &j);
	for (a = 1; a <= i; a++)
	{
		for (b = 1; b <= j; b++)
		{
			if ((a == 1) || (a == i) || (b == 1) || (b == j))
				printf("%c", sign);

			else printf("%c", sign2);
		}
		printf("\n");
	}




	system("pause");
	return 0;
}