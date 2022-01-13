#include<stdio.h>
int count1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int a = 1999, b = 2299;
		printf("%d", count1(a ^ b));
	return 0;

}
