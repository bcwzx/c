#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？(1/0)>:");
		scanf("%d", &input);
		if (input == 1)
			printf("好offer\n");
		else
			printf("回家");
			return 0;
}
