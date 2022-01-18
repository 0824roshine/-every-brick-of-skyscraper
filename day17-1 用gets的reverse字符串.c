#include<stdio.h>
#include<math.h>
int main()
{
	int bit = 0; int n = 0; 
	long a[10] = { 0 }; int i = 0;
	printf("请输入几位数：");
	scanf("%d", &n);
	for (i = 0; i < 10; i++)
	{
		a[i] = powf(i, n);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
		
	
	return 0;
}