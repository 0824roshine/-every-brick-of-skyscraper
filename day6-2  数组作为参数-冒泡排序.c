#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubble_silly(int num, int arr[])   // n ��Ԫ��ð��������Ҫn-1 �ˣ�   
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0; int j = 0; int tmp = 0;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num-i-1 ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
void bubble_2(int num, int arr[])       //��Ȼ�Ƿ��˴����Ϳ����Ż�ÿһ��
{
	int sz = sizeof(arr) / sizeof(arr[0]); 
	int i = 0; int j = 0; int tmp = 0;
	for (i = 0;i < num - 1; i++)
	{
		int flag = 1;   //�����ж���һ���ǲ�������ġ�
		for (j = 0; j < num - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
		if (flag == 1)      //����������Ҳ����Ҫð���� ��
			break;
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,1 };
	int k = 0; int siz = sizeof(arr) / sizeof(arr[0]);//ʵ���ϴ�������Ԫ�ص�ַ
	bubble_2(siz,arr);
	for (k = 0; k < siz; k++)
	{
		printf("%d ", arr[k]);
	}
	printf("\n");
	printf("arr��%p   &arr[0]��%p  *arr��%d", arr, &arr[0], *arr);
	return 0;
}