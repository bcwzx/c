#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//数组名的意义
//1.sizeof(数组名）
//2.&(数组名)
//3.除此之外所有的数组名都表示首元素的地址
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//计算第一行的大小 16
//	printf("%d\n", sizeof(a[0]+1));//a[0]+1就是第一行第二个元素的地址，地址大小是4
//	printf("%d\n", sizeof(*a[0]+1));// *(a[0]+1是第一行第二个元素，大小是4个字节
//	printf("%d\n", sizeof(a+1));//a是二维数组，没有sizeof数组名，也没有&(数组名),所以a是首元素地址，把二维数组看成一维数组时，
//	//二维数组的首元素地址是第一行，a+1就是第二行的地址  4
//	printf("%d\n", sizeof(*(a+1)));//16  a[1]第二行的地址
//	printf("%d\n", sizeof(&a[0]+1));//4 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  第二行的大小
//	printf("%d\n", sizeof(*a));//a是首元素地址，第一行地址，*a就是第一行 sizeof（*a）就是计算第一行大小
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}













//int main()
//{
//    const char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p+1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p+1));//随机值
//	printf("%d\n", strlen(&p[0]+1));//5






//	const char* p = "abcdef";
//	printf("%d\n", sizeof(p));//   4/8  计算指针变量p的大小
//	printf("%d\n", sizeof(p+1));  //4/8  p+1得到的是字符b的地址
//	printf("%d\n", sizeof(*p));// *p就是字符串第一个字符 ‘a’
//	printf("%d\n", sizeof(p[0]));// int arr[10]; arr[0]==*(arr+0)  p[0]=*(p+0)=='a'
//	printf("%d\n", sizeof(&p));//  4/8 p的地址
//	printf("%d\n", sizeof(&p+1));//  4/8  跳过p地址
//	printf("%d\n", sizeof(&p[0]+1));//  4/8  b的地址
//	return 0;
//}





//int main()
//{
//	char arr[] = "abcdef";
//		printf("%d\n", strlen(arr));//6
//		printf("%d\n", strlen(arr+0));//6
//		/*printf("%d\n", strlen(*arr)); err 
//		printf("%d\n", strlen(arr[1]));*/  //err
//		printf("%d\n", strlen(&arr));//  6
//		printf("%d\n", strlen(&arr+1));// 跳过\0，往后数，随机值
//		printf("%d\n", strlen(&arr[0]+1));// 5 从b的地址往后数，5个字符
//		return 0;
//}









//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); //7
//	printf("%d\n", sizeof(arr+0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));// 1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr+1));//4/8
//	printf("%d\n", sizeof(&arr[0]+1)); //4/8
//	return 0;
//}






//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr+0));//随机值
//	printf("%d\n", strlen(*arr)); err
//	printf("%d\n", strlen(arr[1])); err
//	printf("%d\n", strlen(&arr)); 随机值
//	printf("%d\n", strlen(&arr+1));随机值 跳过了一个数组 -6
//	printf("%d\n", strlen(&arr[0]+1));随机值 从第二个开始 -1
//	return 0;
//}








//字符数组
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));  //  4/8
//	printf("%d\n", sizeof(*arr)); // arr首元素地址，*arr是首元素，首元素大小是一个字节  1
//	printf("%d\n", sizeof(arr[1]));//  1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1)); //跳过整个数组后的地址  4/8
//	printf("%d\n", sizeof(&arr[0] + 1)); //第二个元素的地址 4/8
//}












//一维数组
//int main()
//{
//	int a[] = { 1,2,3,4 };//4*4=16
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));// 4/8
//	printf("%d\n", sizeof(*a));//  4/8
//	printf("%d\n", sizeof(a+1));// a+1表示第二个元素的地址  4/8
//	printf("%d\n", sizeof(a[1]));// 第二个元素的大小 4/8
//	printf("%d\n", sizeof(&a));// 4/8
//	printf("%d\n", sizeof(*&a)); //16
//	printf("%d\n", sizeof(&a+1));// &a是数组的地址，虽然&a+1跳过整个数组，但是还是地址，所以还是4/8
//	printf("%d\n", sizeof(&a[0]));// 4/8
//	printf("%d\n", sizeof(&a[0]+1)); //4/8
//	return 0;
//}