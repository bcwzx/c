#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[10] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//
//	return 0;
//}





//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p-=2;
//	}
//	return 0;
//}








// 野指针
//指针指向的内存空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p=test();
//	*p = 20;
//	return 0;
//}
//
//
//
//
//
//指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++) = i;
//	}
//	return 0;
//}
//
//
//
//
//
//
//
//指针未初始化
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量就被初始化随机值
//	*p = 20;
//	return 0;
//}








//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//  数组名，首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc); 
//	printf("%p\n", pc+1);
//	return 0;
//}
//指针的类型决定了指针向前或者向后走一步有多大（字节）









//指针类型决定了指针进行解引用操作的时候，能够访问的空间大小
// int *  *p访问4个字节
// char* *p访问1个字节
//double*  *p访问8个字节








//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量
//	return 0;
//}