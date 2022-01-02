#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//联合体大小
union Un
{
	int i;
	char arr[5];
}u;
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}
//大小端存储
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	/*返回1，小端
//	返回0，大端*/
//	return u.c;
//	/*int a = 1;
//	return*(char*)&a;*/
//}



//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}







//enum color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum color c = 2;
//	return 0;
//}