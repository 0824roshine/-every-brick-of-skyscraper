#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0; int j = 0; int truth = 0;
	int num;
	printf("�����������\n");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)// (i=i+2)��Ϊż���������ǣ�  ѭ��������һ����i++
	{                              // �������Ǳ�ġ�
		for (truth =1,j =2; (j * j) <= i; j++)    
		{                           //ֻ��ҪȡС������������
			if((i%j)==0)            // ɸ������������
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