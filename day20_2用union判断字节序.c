int  check_�ֽ���()
{
	int a = 1;
	return *(char*)&a;
}

int  check_�ֽ���_by_union()
{
	union UN
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;    //����1 ��ʾС�ˡ�
}
int main()
{
	int ret;
	ret = check_�ֽ���();
		if (ret)
			printf("С��\n");
		else
			printf("���\n");
		ret = check_�ֽ���_by_union();
		if (ret)
			printf("С��\n");
		else
			printf("���\n");
		return 0;
}