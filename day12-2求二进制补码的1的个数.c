#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求二进制补码中有多少个1
int count_one(unsigned int n)
{
	int tmp = 0; int count = 0;
while(n!=0)
	{
	if (n % 2 == 1)
		count++;
		n /= 2;
		
	}
return count;
}
int count_one_by_and(int n)
{
	int i = 0, count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >>i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int count_the_one_ultimateVersion(int n)
{
	int count = 0;
	while (n != 0)
	{
		n = n & (n - 1);
		count++;
	}
}
int main()
{
	int n = -1;
	printf("%d\n", count_one(n));
	printf("%d\n", count_one_by_and(n));
	printf("%d\n", count_the_one_ultimateVersion(n));
	return 0;
}