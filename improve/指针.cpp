#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
void menu()
{
	printf("*************************************\n");
	printf("****** 1.add        2.sub    ********\n");
	printf("*******3.mul        4.div    ********\n");
	printf("*******5.xor        0.exit   ********\n");
	printf("*************************************\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	//pfArr是一个函数指针数组（转移表）
	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
	do {
		menu();
		printf("请输入\n");
		scanf("%d", &input);
		if (input>=1 && input<=5)
		{
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
	   } while (input);
	   return 0;
}










//char* my_strcpy(char* dest, const char* src)
////1.写一个函数指针pf，能够指向my_strcpy
////2.写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址
//{
//	//1.char* (*pf)(char*,const char*) = my_strcpy;
//	//2.char*(*pfArr[4])(char*,const char*)=my_strcpy;
//}


	
	




//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//函数指针的数组  ->把相同函数的地址放在一个数组当中，
//int main()
//{
//	int* arr[5];
//	int (*pa)(int, int) = Add;//Sub,Mul,Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2,3));
//	}
//	return 0;
//}






//   1.(*(void(*)())0)() ->把0强制类型转换成void(*)()的函数指针类型 -0就是一个函数的地址
//调用0地址处的该函数
//2.void(*signal(int ,void(*)(int)))(int )
//signal是一个函数声明
//signal函数的参数有两个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是int
//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void


//2的简化  typedef void(*pfun_t)(int);
//pfun_t signal(int ,p_fun_t)






//void Print(char*str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//   void (*p)(char*) = Print;
//  (*p)("hello bit"); 
//	return 0;
//}



//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
////函数指针  -指向函数的指针,存放函数地址的一个指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}






//二维数组传参
//void test(int** p)
//{
//}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);//传一个一级指针变量的地址
//	test(pp);//传一个二级指针变量
//	int* arr[10];
//	test(arr);//传一个指针数组
//	return 0;
//}







//int main()
//{
//    //字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针 -指向数组
//	//int *p3;//整形指针-指向整形的指针
//	//int *p4;//字符指针 -指向字符的指针
//	int arr2[5];
//	int(*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//	return 0;
//}












//int arr[5];  //arr是5个元素的整形数组
//int* parr1[10]; //parr1是一个数组，数组有10个元素，每个元素的类型是int*,parr1是指针数组
//int(*parr2)[10];//parr2是一个指针，该指针指向的一个数组，这个数组有10个元素，每个元素的类型是int   -parr2是数组指针
//int(*parr3[10])[5];//parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指向的数组有5个元素，每个元素是int
   //    int(*)[5]  +   parr3[10]










//参数是数组的形式
//void print1(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//			for (j = 0; j < y; j++)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			printf("\n");
//	}
//}
////参数是指针的形式
//void print2(int(*p)[5],int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			/*printf("%d ", *(*(p + i) + j));*/
//			printf("%d ",p[i][j]);
//		}
//		printf("\n");
//	}
//}
////数组指针 是指针，用来指向数组
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);





	//int arr[10] = {};
	//arr-首元素地址
	//&arr[0]-首元素地址
	//&arr-数组的地址
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;*/
	/*char* arr[5];
	char*(*pa)[5] = &arr;*/
//	return 0;
//}





//指针数组 是数组用来存放指针的
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;  
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}








//int main()
//字符指针
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "abdcef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1==p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}






//int main()
//{
//	const char *p = "abcdef";//abcdef->常量字符串
//	printf("%c\n", *p);
//	printf("%s\n", p);
//
//	return 0;
//}