#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cnt = 0;
int fib(int n)
{
	cnt++;
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
		return fib(n - 1) + fib(n - 2);
}
void main()
{
	fib(8);
	printf("%d", cnt);
}
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//#define OFFSETOF(struct_name,member_name)(int)&(((struct_name*)0)->member_name)
//int main() 
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a) );
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}



//可以避免头文件的重复引入  ->条件编译
//1.#pragma once
//int Add(int x, int y);
//
//
//2.#ifndef __TESH_H__
//#define __TESH_H__
//int Add(int x,int y);
//#endif





//#include<>  ->一般引用库函数
//#include""  ->一般自定义函数 


//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	return 0;
//}











//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//		printf("%d\n", max);//12
//		printf("%d\n", a);//11
//		printf("%d\n", b);//13
//}





//#define CAT(X,Y)X##Y 
//int main()
//{
//	
//	int Class100 = 2022;
//	printf("%d\n", CAT(Class, 100));
//	
//}






//#define PRINT(X)printf("the value of "#X" is %d\n",X)
//int main()
//{
//	//将一个宏的参数插入到字符串中
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of a is 10")
//	PRINT(b);
//	//prinf("the value of b is 20")
//	return 0;
//}









//#define DOUBLE(x)((x)*(x))
//int main()
//{
//	int ret = DOUBLE(5 + 1);
//	printf("%d\n", ret);
//	return 0;
//}



//#define SQUARE(x)x*x
//int main()
//{
//	int ret = SQUARE(5);
//	//5*5
//	printf("%d\n", ret);
//	return 0;
//}











//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d  date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}






//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//}






//int main()
//{
//	int a = 10;
//	int b = 20;
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	 }
//	int c = Add(a, b);
//	printf("c=%d\n", c);
//	return 0;
//}