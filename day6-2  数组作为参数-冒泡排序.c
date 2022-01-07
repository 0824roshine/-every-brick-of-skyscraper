#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubble_silly(int num, int arr[])   // n 个元素冒泡排序需要n-1 趟；   
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
void bubble_2(int num, int arr[])       //既然是分趟处理，就可以优化每一趟
{
	int sz = sizeof(arr) / sizeof(arr[0]); 
	int i = 0; int j = 0; int tmp = 0;
	for (i = 0;i < num - 1; i++)
	{
		int flag = 1;   //用来判断这一趟是不是有序的、
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
		if (flag == 1)      //如果有序就再也不需要冒泡了 ！
			break;
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,1 };
	int k = 0; int siz = sizeof(arr) / sizeof(arr[0]);//实际上传的是首元素地址
	bubble_2(siz,arr);
	for (k = 0; k < siz; k++)
	{
		printf("%d ", arr[k]);
	}
	printf("\n");
	printf("arr是%p   &arr[0]是%p  *arr是%d", arr, &arr[0], *arr);
	return 0;
}