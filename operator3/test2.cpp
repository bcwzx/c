#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>








//int main()
//{
//	char a  = 3;
//	//00000000000000000000000000000011
//
//	char b = 127;
//	//‭00000000000000000000000001111111‬
//	char c = a + b;
//	//00000011
//	// 	   +
//	//01111111‬
//	//00000010
//
//
//
//	//11111111111111111111111100000010  补码
//	//11111111111111111111111100000001  反码
//	//10000000000000000000000011111110  原码
//	printf("%d\n", c);
//
//
//
//	return 0;
//}











//创建了一个结构体类型-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "张三",20,"20190305" };
//	struct  Stu* ps = &s1;
//	/*printf("%s\n", (*ps).name);
//	printf("%s\n", (*ps).id);
//	printf("%s\n", (*ps).age);*/
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	return 0;
//}


//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候（）就说函数调用的操作符
//	int max = get_max(a, b);
//	printf("max=%d\n",max);
//	return 0;
//
//}




//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//		return 0;
//}





//int main()
//{
//	int a = 6;
//	int b = 0;
//	b = (a > 5 ? 3 : -3);//三目操作符
//	printf("%d\n", b);
//	return 0;
//}














//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);//4
//	test2(ch);//4
//	return 0;
//}












//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	a = a & (~(1 << 2));               
//	printf("%d\n", a);//11              
//}







//int main()
//{
	//int a = 0;
	//~ 按位取反
	//00000000000000000000000000000000
	//11111111111111111111111111111111 补码
	//11111111111111111111111111111110 反码
	//10000000000000000000000000000001 原码
	//printf("%d\n", ~a);
	//return 0
//}












//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//  short（2）
//	printf("%d\n", s);//0   sizeof内部表达式不参与运算
//	return 0;
//}