#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int RunYear(int year)
{
	if ((!(year % 400)) || (!(year % 4) && ((year % 100))))
		return 1;
}
int main()
{
	int a = 0, b = 0, i = 0;
	printf("请输入范围从__年到__年\n");  
	scanf("%d %d", &a, &b);
	if ((a % 4))
		a = a + (4 - a % 4);
	for (i = a; i<=b;i = i + 4)
	{
		if (RunYear(i))
			printf("%d,", i);
	}
	return 0;
}