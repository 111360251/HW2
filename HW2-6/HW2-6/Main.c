#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i, j;
	float a = 10.0, b, c = 0.0;
	printf("Modified Compound Interest Program\n");
	printf("請輸入你的投資金額 $:");
	scanf_s("%f", &b);
	for (i = 1; i <= 15; i++)
	{
		printf("第%d年的年利率為百分之%.2f\t", i, a);
		c = b * (a / 100) + b;
		printf("第%d年獲利為%.2f", i, c);
		a = a + 0.5;
		printf("\n");
	}




	system("pause");
	return 0;
}