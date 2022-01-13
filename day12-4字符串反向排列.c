#include<stdio.h>
void reverse(int size,char* ch)
{
	char tmp = '0';
	int left = 0;
	while(left<size)
	{
		tmp = *(ch+left);
		*(ch + left) = *(ch + size);
		*(ch + size)=tmp;
		left++;
		size--;
	}
}
int main()
{
	char ch[] = "uevolI";
	int size = sizeof(ch) - 1-1;
	int i = 0;
	reverse(size, ch);
	while (ch[i] != '\0')
	{
		printf("%c", ch[i]);
		i++;
	}
	return 0;
}