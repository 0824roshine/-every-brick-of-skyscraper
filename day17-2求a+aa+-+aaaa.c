#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0, i = 0; int a = 0,tmp = 0;
	scanf("%d %d", &n, &a);
	for (i = n; i >0; i--)
	{
		tmp += (i) * (powf(10, (n - i)));
	}
	tmp *= a;
	printf("%d", tmp);
	return 0;
}
	