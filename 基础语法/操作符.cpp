#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
int main()
{
	//（2进制）位操作
	//&按位与
	//|按位或
	//^按位异或  相同为0，相异为1
	int a = 3;
	int b = 5;
	int c = a ^ b;
	//   3=011;
	//   5=101;
	printf("%d\n", c);

	//int a = 1;
	//整形4个字节，占32bit位
	//int b = a << 1;
	//00000000000000000000000000000010   1×2¹;
	///b=a+1  //a没有变
	//printf("%d\n", b);



	//int a = 5 %2;//取模
	//2
	//printf("%d\n", a);
	return 0;
}