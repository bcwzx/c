#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//整形家族
//char
//unsigned char 0-255
//signed char -128-127
//判断小端存储还是大端存储
//int check_sys()
//{
//	int a = 1;
//	//char*p=(char*)&a;
//	//return *p;
//	return *(char*)&a;
//}
////指针类型的意义：
////1.指针类型决定了指针解引用操作符能访问几个字节：char*p  *p访问一个字节，int*p   *p访问四个字节
////2.指针类型决定了指针+1，-1，加或减的是几个字节，char*p  p+1跳过一个字节，int*p  p+1跳过四个字节
//
//int main()
//{
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









//int main()
//{
//	int a = 20;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}