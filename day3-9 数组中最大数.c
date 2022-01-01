#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1,4,3,5,19,2,6,8,7 };
	int max = 0; int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0;i < len; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("%d", max);
	return 0;
}