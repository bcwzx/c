#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//��ŵ������
	//������̨������



	return 0;
}






//������n��쳲�������
// 1  1  2  3  5  8  13  21  34  55
//ѭ��
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

// �ݹ�  (ջ���������Ч�����⣩
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}









//int Fac1(int n)
//{
//	int i = 0; 
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac2(n - 1);
//}
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//ѭ����ʽ
//	printf("%d\n", ret);
//	return 0;
//}









//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	    return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len=my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}











//�ݹ�
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n /10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}














//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//
//}