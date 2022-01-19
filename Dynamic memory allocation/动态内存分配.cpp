#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//笔试题
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//free释放str指向的空间后，并不会把str置为NULL
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		//非法访问内存
//		//str已经free，空间已还给操作系统，在将world拷贝到str上，非法访问
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}









//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//忘记释放动态开辟的内存，导致内存泄漏
//	//改
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//    return 0;
//}














//2.非法访问内存
//char* GetMemory(void)  GetMemory指向的是栈内存
//{
//	char p[] = "hello world";
//	return p;
//	//虽然有返回p，但出函数，已经被销毁，新内容不可知，str非法访问内存
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}





//int* test()
//{
//	//static int a=10; 静态区
//	int a = 10;//栈区
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p= 20;
//	return 0;
//}







//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	
//}
//改正1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
// *p=str
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str= NULL;
//}
//改正2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}







//int main()
//{
//	//realloc 直接开辟空间
//	int* p =(int*)realloc(NULL, 40);
//	return 0;
//}









//动态内存分配时的错误
//int main()
//{
	//1.对空指针的解引用操作
	//int* p = (int*)malloc(20);
	//p进行相关的判断
	////*p=10;  //err->万一malloc开辟失败了，p就被赋值为NULL
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;
	


	//2.对动态开辟内存的越界访问
	/*int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
	}
	free(p);
	p = NULL;*/

	//3.对非动态开辟内存使用free函数
	/*int a = 0;
	int* p = &a;
	*p = 20;
	free(p);
	p = NULL;*/


	//4.free释放动态开辟内存的一部分
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*p++ = i;//p指向的位置变化，循环结束，指向最后一位

	//	}
	//	free(p);
	//	p = NULL;


	//5.对同一块内存多次释放
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//free(p);
	////p=NULL 释放完置为NULL
	//free(p);


	//6.动态开辟内存忘记释放(内存泄漏)
	/*while (1)
	{
		malloc(1);
	}
		return 0;
	}
	return 0;
}*/









//都在堆上开辟空间
//int main()
//{
//	int*p =(int*) malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i<5; i++)
//		{
//			*(p + i)=i;
//		}
//	}
//	//realloc 调整动态开辟内存空间的大小
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的空间可以追加，则realloc函数会重新找一个新的内存区域
//	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//最后返回新开辟的内存空间地址
//	//3.得有用一个新的变量来接受realloc函数的返回值
//	int*ptr =(int*) realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			 *(p + i)=i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}











//int main()
//{
//	//malloc(10*sizeof(int))
//	int*p=(int*)calloc(10, sizeof(int));//calloc把元素初始化为0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}







//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候要还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//}