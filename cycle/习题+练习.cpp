#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//9*9乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}






//求十个整数最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}












//分数求和
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}











//编写1-100中所有整数出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}









//   优化
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//			if (j > sqrt(i))
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//		printf("\ncount=%d\n", count);
//		return 0;
//	}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//i是否为素数
//		//素数判断规则
//		//1.试除法
//		//产生2->i-1;
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//			if (j == i)
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//
//		printf("\ncount=%d\n", count);
//		return 0;
//	}










//打印1000-2000的闰年
//int main()
//{
//	int year = 0;
	//for (year = 1000; year <= 2000; year++)
		//{
		//	if (year % 4 == 0 && year % 100 != 0)//  1.能够被4整除并且被100整除	  2.能够被400整除                               
		//	{
		//		printf("%d ", year);
		//	}
		//	else if (year % 400 == 0)
		//	{
		//		printf("%d ", year);
		//	}
		//}
//		if (((year % 4 == 0) && (year % 100 != 0)) || year % 4 == 0)
//			printf("%d ", year);
//	return 0;
//}










//两个数的最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18; 
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}










//打印3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}







//比较三个数的大小
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//		
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}