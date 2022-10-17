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
		printf("經理工資代碼為[1]	小時工資代碼為[2]	");
		printf("委員會代碼為[3] 	計件工人代碼為[4]	若不再查詢代碼為[-1]結束\n");
		scanf_s("%d", &a);
		switch (a)
		{

		case 1:
			printf("請輸入要支付給經理的(固定週薪):");
			scanf_s("%lf", &b);
			printf("Salary is $%.2lf\n", b);
			break;

		case 2:
			printf("請輸入要給小時工的時薪為多少:");
			scanf_s("%lf", &c);
			printf("請問小時工今天工作幾個小時(超過40小時工資每小時增加1.5倍):");
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
			printf("請輸入委員會每週的銷售總額:");
			scanf_s("%f", &m);
			n = (m*0.057) + 250;
			printf("Salary is $%.2f:", n);
			break;

		case 4:
			printf("請輸入計件工人生產幾件商品:");
			scanf_s("%d", &j);
			printf("請輸入計件工人每件所獲得商品金額:");
			scanf_s("%lf", &k);
			printf("Salary is $%.2lf:", k*j);
			break;

		default:
			printf("輸入錯誤請您在輸入一次 感謝!");
			break;
		}
		printf("\n");
		if (a == -1) break;
	}
	system("pause");
	return 0;
}