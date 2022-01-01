#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0; int j = 0; int truth = 0;
	int num;
	printf("请输入最大数\n");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)// (i=i+2)因为偶数不可能是，  循环增量不一定是i++
	{                              // 还可能是别的。
		for (truth =1,j =2; (j * j) <= i; j++)    
		{                           //只需要取小于它的素数。
			if((i%j)==0)            // 筛法，素数定理。
			{ 
				truth = 0;
				break;
			}
		}
		if (truth)
		printf("%d,", i);
	}
	return 0;
}