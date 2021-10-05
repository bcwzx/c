#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>


//#define MAX 100
////#define 定义标识符常量
////#define定义宏-带参数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define Max(X,Y)(X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a,b);
//	printf("max=%d\n", max);
//	//宏的定义方式
//	max = Max(a, b);
//	printf("max=%d\n", max); 









//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum =Add(a, b);
//	printf("%d\n", sum);
	//static修饰函数改变了函数的链接属性
	//外部链接属性-》内部链接属性







//void test()
//{
//static int a = 1;//static 修饰局部变量，局部变量生命周期变长
//a++;
//printf("%d\n", a);
//
//}
//int main()
//{
////extern 声明外部符号
//	//static 修饰全局变量，让静态的全局变量只能在自己所在的源文件内部使用，改变了作用于
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//
//
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}





	//硬盘-内存-高速缓存-寄存器
	//register int a = 10;//建议把a定义为寄存器变量
	//return 0;


//int Add(int x,int y)
//{
//	int z= 0;
//	z = x + y;
//	 return z;
//}
	//int arr[10] = { 0 };
	//arr[4];//  [] 下标引用操作符
	//int a = 10;
	//int b = 20;
	//int sum = Add(a, b);//()函数调用操作符
	//return 0;








	/*int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b ? a : b);
	printf("%d\n", max);*/








	//真 非0
	//假 0
	//&&  逻辑与
	//||  逻辑或
	/*int a = 0;
	int b = 5;
	int c = a || b;
	printf("%d\n",c);
	return 0;*/




	//int a = 10;
	//int b = a++; //后置++，先赋值，后++
	//int b = ++a;//前置++，先使用，后赋值
	//int b = a--;//后置--，先赋值，后--
	//int b = --a;//前置--，先使用，后赋值
	//printf("a=%d,b=%d\n", a, b);



	/*int a = 0;
	int b = ~a;*/
	/*00000000000000000000000000000000
	11111111111111111111111111111111
	//原码->反码（按位取反）
	//反码->补码（+1）
	负数在内存中存储的二进制的补码
	11111111111111111111111111111111
	11111111111111111111111111111110
	10000000000000000000000000000001;*/
	//printf("%d\n",b);




//int Max(int x, int y)
//{
//	//if (x > y)
//	//	return x;
//	//else
//	//	return y;
//	//return x > y ? x : y;
//}
//int main()
//{
//	 int num1 = 10;
//	 int num2 = 20;
//	 int max = 0;
//	 max = Max(num1, num2);
//	 printf("max=%d\n", max);





	/*int num1 = 10;
	int num2 = 20;
	if (num1 < num2)
		printf("较大值是：%d\n", num2);
	else
		printf("较大值是：%d\n", num1);*/
	//return 0;
//}