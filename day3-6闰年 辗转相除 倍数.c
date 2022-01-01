#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int  main()
{
 int i = 0;int a = 0; int b = 0; int c = 0;
 int f = 0; int g = 0;
 printf("打印所有的3的倍数：\n");
	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3))
			printf("%d,", i);
	}
	printf("\n");
	printf("请输入两个数\n");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		i = a; a = b; b = i;
	}
	while (a%b)
	{
		i = a % b; a = b; b = i;
	}
	printf("最大公约数是：%d\n", b);
	/*while (a != b)
	{
		if (a < b)
		{
			c = a; a = b; b = c;
		}
		a = a - b;
	}
	printf("最大公约数是：%d\n", a);*/ // 
	printf("请输入年份范围：\n");
	scanf("%d %d", &f, &g);
	printf("是闰年的有：\n");
	for (i = f; i <= g; i++)
	{
		if (!(i % 400))
			printf("%d年,", i);
		else if ((i % 100)&&(!(i % 4)))
			printf("%d年,", i);
	}
	return 0;
}