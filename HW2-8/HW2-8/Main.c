#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, a, b, c;
	for (a = 1; a <= 500; a++)
	{
		for (b = 1; b <= a; b++)
		{
			for (c = 1; c <= 500; c++)
			{
				if (c*c == a * a + b * b)
					printf("%d的平方=%d的平方+%d的平方\n", c, b, a);
			}
		}
	}

	system("pause");
	return 0;
}