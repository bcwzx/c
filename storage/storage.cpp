#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���μ���
//char
//unsigned char 0-255
//signed char -128-127
//�ж�С�˴洢���Ǵ�˴洢
//int check_sys()
//{
//	int a = 1;
//	//char*p=(char*)&a;
//	//return *p;
//	return *(char*)&a;
//}
////ָ�����͵����壺
////1.ָ�����;�����ָ������ò������ܷ��ʼ����ֽڣ�char*p  *p����һ���ֽڣ�int*p   *p�����ĸ��ֽ�
////2.ָ�����;�����ָ��+1��-1���ӻ�����Ǽ����ֽڣ�char*p  p+1����һ���ֽڣ�int*p  p+1�����ĸ��ֽ�
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}









//int main()
//{
//	int a = 20;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}