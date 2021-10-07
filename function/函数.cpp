#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	//函数内部不能求参数个数，在函数外部求
//	int leaf = 0;
//	int right = sz - 1;
//	while (leaf <= right)
//	{
//		int mid = (leaf + right) / 2;
//		if (arr[mid] < k)
//		{
//			leaf = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret== -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}














//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0 || (y % 400 == 0))
//	return 1;
//	 else
//    return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断闰年
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//		return 0;
//}











// 素数判断
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0; 
//}




//当实参传给形参的时候
//形参是实参的一份临时拷贝
//对形参的修改是不会改变实参的
//void Swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int *pa,int*pb)
//{
//	int tmp = 0;
//	tmp=*pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	/*Swap1(a, b);*/
//	Swap2(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}






//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	printf("%d\n", max);
//	return 0;
//}









//int main()
//{
//	char arr[] = "Hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//	//memset函数
//}












//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//	//strcpy  string copy 字符串拷贝
//	//strlen  string length 字符串长度
//}