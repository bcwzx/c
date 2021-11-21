#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int a=10;
// int *pa=&a;
// char*pc=&a;
// char ch='w';
//回调函数
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz-1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			//一趟冒泡排序
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
			}
		}
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2)
{
	//比较两个整形
	return *(int*)e1 - *(int*)e2;
}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	//比较两个浮点型
//	return ((int)*(float*)e1 - *(float*)e2);
//}
//void test2()
//{
//	float f[] = { 9.0,  8.0,  7.0,  6.0,  5.0,  4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f  ", f[j]);
//	}
//}
int cmp_Stu_by_age(const void* e1, const void* e2)
{
	return((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_Stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用大于小于等于比较
	///应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = { {"zhangsan",10},{"lisi",20},{"wangwu",21} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_age);
	
}
int main()
{
	//int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//struct Stu s[3] = { {"zhangsan",10},{"lisi",20},{"wangwu",21} };
	//float f[] = { 9.0,  8.0,  7.0,  6.0,  5.0,  4.0 };
	//bubble_sort(arr, sz);
    //	test1();
	//test2();
	test3();
	return 0;
}







//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//指针数组
//	//int *arr[10];
//	//数组指针
//	//int(*pa)[10]=&arr;
//	//函数指针
//	int(*pAdd)(int, int) = Add;
//	int sum = (*pAdd)(1, 2);
//	        // Add(1,2);
//	printf("sum=%d\n",sum);
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ppArr)[5])(int,int)= &pArr;
//	return 0;
//}









//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int(*pf)(int, int)//函数指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	//ppfArr是一个指向函数指针数组的指针
//	int(*(ppArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组元素有4个
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//
//	return 0;
//}
//