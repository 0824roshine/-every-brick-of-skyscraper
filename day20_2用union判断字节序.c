int  check_字节序()
{
	int a = 1;
	return *(char*)&a;
}

int  check_字节序_by_union()
{
	union UN
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;    //返回1 表示小端。
}
int main()
{
	int ret;
	ret = check_字节序();
		if (ret)
			printf("小端\n");
		else
			printf("大端\n");
		ret = check_字节序_by_union();
		if (ret)
			printf("小端\n");
		else
			printf("大端\n");
		return 0;
}