#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int  main()
{
 int i = 0;int a = 0; int b = 0; int c = 0;
 int f = 0; int g = 0;
 printf("��ӡ���е�3�ı�����\n");
	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3))
			printf("%d,", i);
	}
	printf("\n");
	printf("������������\n");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		i = a; a = b; b = i;
	}
	while (a%b)
	{
		i = a % b; a = b; b = i;
	}
	printf("���Լ���ǣ�%d\n", b);
	/*while (a != b)
	{
		if (a < b)
		{
			c = a; a = b; b = c;
		}
		a = a - b;
	}
	printf("���Լ���ǣ�%d\n", a);*/ // 
	printf("��������ݷ�Χ��\n");
	scanf("%d %d", &f, &g);
	printf("��������У�\n");
	for (i = f; i <= g; i++)
	{
		if (!(i % 400))
			printf("%d��,", i);
		else if ((i % 100)&&(!(i % 4)))
			printf("%d��,", i);
	}
	return 0;
}