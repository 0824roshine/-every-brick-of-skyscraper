#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char ar1[] = "Never gonna give you up!!!";
	char ar2[] = "##########################";
	int left = 0;
	int Right = (sizeof(ar1) / sizeof(ar1[0]))-2;  // =strlen(ar1)-1_______-<string.h>
	for(;left<= Right;left++,Right--)
	{
		ar2[left] = ar1[left];
		ar2[Right] = ar1[Right];
		Sleep(500);
		printf("%s\n", ar2);
	}
	return 0;
}