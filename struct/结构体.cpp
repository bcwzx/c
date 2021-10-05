#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	//利用结构体类型-创建一个该类型的结构体变量
	struct Book b1 = {"C语言程序设计",55};
	strcpy(b1.name, "C++");// string copy字符串拷贝-库函数-string.h
	printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//利用pb打印出我的书名和价格
	
	// ->结构体指针->成员
	/*printf("%s\n", pb->name);
	printf("%d\n", pb->price);*/


	//  .结构体变量.成员
	/*printf("书名：%s\n", b1.name);
	printf("价格:%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格:%d\n", b1.price);
	return 0;*/

}