#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, j, l = 1;
	double b, c, d, e, x, y, k;
	float m, n;
	printf("Calculating Weekly Pay\n");
	while (l > 0)
	{
		printf("\n");
		printf("�g�z�u��N�X��[1]	�p�ɤu��N�X��[2]	");
		printf("�e���|�N�X��[3] 	�p��u�H�N�X��[4]	�Y���A�d�ߥN�X��[-1]����\n");
		scanf_s("%d", &a);
		switch (a)
		{

		case 1:
			printf("�п�J�n��I���g�z��(�T�w�g�~):");
			scanf_s("%lf", &b);
			printf("Salary is $%.2lf\n", b);
			break;

		case 2:
			printf("�п�J�n���p�ɤu�����~���h��:");
			scanf_s("%lf", &c);
			printf("�аݤp�ɤu���Ѥu�@�X�Ӥp��(�W�L40�p�ɤu��C�p�ɼW�[1.5��):");
			scanf_s("%lf", &x);
			if (x <= 40)
			{
				d = c * x;
				printf("Salary is $%.2lf:", d);
			}
			else
			{
				y = x - 40;
				e = c * 1.5;
				d = ((y*e) + (x - y)*c);
				printf("Salary is $%.2lf:", d);
			}
			break;
		case 3:
			printf("�п�J�e���|�C�g���P���`�B:");
			scanf_s("%f", &m);
			n = (m*0.057) + 250;
			printf("Salary is $%.2f:", n);
			break;

		case 4:
			printf("�п�J�p��u�H�Ͳ��X��ӫ~:");
			scanf_s("%d", &j);
			printf("�п�J�p��u�H�C�����o�ӫ~���B:");
			scanf_s("%lf", &k);
			printf("Salary is $%.2lf:", k*j);
			break;

		default:
			printf("��J���~�бz�b��J�@�� �P��!");
			break;
		}
		printf("\n");
		if (a == -1) break;
	}
	system("pause");
	return 0;
}