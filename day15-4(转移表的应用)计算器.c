#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("********主菜单*******\n");
	printf("***1,计算，2，退出***\n"); 
	printf("*********************\n");
}
double plus(double a, double b)
{
	double c = a + b;
	return c;
}
double minus(double a, double b)
{
	double c = a - b;
	return c;
}
double multiple(double a, double b)
{
	double c = a * b;
	return c;
}
double devide(double a, double b)
{
	double c = a / b;
	return c;
}
void CAL()
{
	int i = 0;
	double para1 = 0; double para2 = 0; char op = '0';
	double(*par[4])(double, double) = { plus,minus,multiple,devide };
	printf("请输入：");
	scanf("%lf %c %lf", &para1, &op, &para2);
	if (op == '+')
		i = 0;
	else if (op == '-')
		i = 1;
	else if (op == '*')
		i = 2;
	else if (op == '/')
		i = 3;
	else
		{
		printf("error");
		return -1;
	    }
	printf("result = %f\n", (*par[i])(para1, para2));
}
int main()
{
	int input;
	menu();
	do
	{
		input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			CAL();
			break;
		case 2:
			break;
		default:
			printf("重新选择：\n");
			break;
		}
		menu();
	} while(input!=2);
	return 0;
}