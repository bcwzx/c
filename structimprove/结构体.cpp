#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>

struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}
void Print1(struct S tmp)
{
	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}
void Print2(struct S* ps)
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}




int main()
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);
	return 0;
}




//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//
//int main()
//{
//	//offsetof()  宏
//	printf("%d\n", offsetof(struct S,c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//}









//设置默认对齐数
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////取消默认对齐数
//
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	return 0;
//}

////
////struct S1
////{
////	char c1;
////	int a;
////	char c2;
////};
////struct S2
////{
////	char c1;
////	char c2;
////	int a;
////};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
////结构体内存对齐
//int main()
//{
//	//struct S1 s1 = { 0 };
//	//printf("%d\n", sizeof(s1));
//	//struct S2 s2 = { 0 };
//	//printf("%d\n", sizeof(s2));
//	/*struct S3 s3 = { 0 };
//	printf("%d\n",sizeof(s3));*/
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	return 0;
//}










//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	const char arr[20];
//};
//
//
//int main()
//{
//	//struct S s={'c',100,3.14,"hello bit"};
//	struct S s = { 'c',{55,30},100,3.14,"hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf,%d\n", s.st.weight,s.st.age);
//	return 0;
//}














//char short int long float double 内置数据类型
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}