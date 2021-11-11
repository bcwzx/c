#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char  sex[5];
}Stu;
void print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
	printf("\n");
}

void print2(Stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	Stu s = { "李四",20,"15698463581","男" };
	//打印结构体数据
	print1(s);
	print2(&s);
	return 0;
}