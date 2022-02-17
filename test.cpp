#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct tagTest1
{
	short a; //0-1  2
	char d;// 2  1
	long b;//3 4-7  4
	long c;//8->11
	//12
}stT1;
typedef struct tagTest2
{
	long b;// 0-3 4
	short c;//4-5  2
	char d;//6  1
	long a;//7 8->11
	//12
}stT2;
typedef struct tagTest3
{
	short c;//0-1  2
	long b;//2 3 4->7  4
	char d;//8  1
	long a;//9 10 11 12->15
	//16
}stT3;
int main()
{
	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
}





//struct A
//{
//	int a;//0-3  4
//	short b;// 4-5  2
//	int c;//6 7 8->11  4
//	char d;//12
//	//13 14 15 16(4的倍数)
//};
//struct B
//{
//	int a;//0-3   4
//	short b;//4-5  2
//	char c;//6  1
//	int d;//7 8->11  4
//	//12
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//	return 0;
//}











//typedef struct
//{
//	int a; //  0-3  4
//	char b;// 4    1
//	short c;// 6-7  2
//	short d;// 8-9  2
////结构体大小为最大对齐数的整数倍 4最大-> 10-11
//}AA_t;
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}