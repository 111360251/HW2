#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i, j;
	float a = 10.0, b, c = 0.0;
	printf("Modified Compound Interest Program\n");
	printf("�п�J�A�������B $:");
	scanf_s("%f", &b);
	for (i = 1; i <= 15; i++)
	{
		printf("��%d�~���~�Q�v���ʤ���%.2f\t", i, a);
		c = b * (a / 100) + b;
		printf("��%d�~��Q��%.2f", i, c);
		a = a + 0.5;
		printf("\n");
	}




	system("pause");
	return 0;
}