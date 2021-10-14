#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int tmp = 0;
	printf("before:%d%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("after:%d%d\n", a, b);
	return 0;
}












//int main()
//{
	// & -按2进制位与
	/*int a = 3;
	int b = 5;
	int c = a & b;
	printf("%d\n", c);*/
	// | -按2进制位或
	//*int a = 0;
	//int b = 0;
	//int c = a | b;
	//printf("%d\n", c);
	//return 0;
	// ^  -按2进制位异或
    //相同为0 相异为1
//	int a = 3;//0011
//	int b = 5;//0101
//	int c = a ^ b;//0110
//	printf("%d\n", c);
//	return 0;
//}












//int main()
//{
	//int a=16;
	//00000000000000000000000000010000
	//int b=a>>2;
	//printf("%d\n", b);
	// >>  右移操作符
	// 算术右移   右边丢弃，左边补原符号位
	// 逻辑右移   右边丢弃，左边补零
	//移动的是二进制位
	//int a = -1;
	//int b = a >> 1;
	//printf("%d\n", b);
//原码  10000000000000000000000000000001
//反码  11111111111111111111111111111110(除符号位，取反加1）
//补码  11111111111111111111111111111111（反码加1）


//左移  <<左边丢弃，右边补零
//	return 0;
//}