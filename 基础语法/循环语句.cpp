#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	printf("加入比特\n");
	while (line < 20000)
	{
		printf("敲一行代码:%d\n",line);
		line++;
	}
	if(line>=20000)
		printf("好offer:%d\n",line);
	return 0;
}
