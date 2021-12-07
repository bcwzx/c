#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//memset
int main()
{
	char  arr[10] = "";
	memset(arr, '#', 10);

	return 0;
}










//memcmp
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int  arr2[] = { 1,2,5,3,4 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}









//memcpy
//struct S
//{
//	char name[20];
//	int age[30];
//};
//void *my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//C语言标准：
//memcpy 只要处理，不重叠的内存拷贝
//memmove 处理重叠的内存拷贝
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest<src || dest>(char*)src + count)
//	{
//		//前->后
//	}
//	else
//	{
//		//后->前
//	}
//	return ret;
//}
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else 
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//	    }
//	}
//	return ret;
//}
//int main()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy(arr + 2, arr, 20);
//	//memmove();处理内存重叠的情况
//	my_memmove(arr3 , arr3+2, 20);
//	return 0;
//}




//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = {0};
//	struct S arr3[] = { {"张三",20},{"李四",30} };
//	struct S arr4[] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}