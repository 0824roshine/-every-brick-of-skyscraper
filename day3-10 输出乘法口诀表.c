#include<stdio.h>
int main()
{
	int i = 1; int j = 1; int mul = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			mul = j * i;
			if (mul < 10)
				printf("%d * %d = %d  ", j, i, mul);
			else
				printf("%d * %d = %d ", j, i, mul);
		}
		printf("\n");
	}
	return 0;
}


