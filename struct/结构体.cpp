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
	//���ýṹ������-����һ�������͵Ľṹ�����
	struct Book b1 = {"C���Գ������",55};
	strcpy(b1.name, "C++");// string copy�ַ�������-�⺯��-string.h
	printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//����pb��ӡ���ҵ������ͼ۸�
	
	// ->�ṹ��ָ��->��Ա
	/*printf("%s\n", pb->name);
	printf("%d\n", pb->price);*/


	//  .�ṹ�����.��Ա
	/*printf("������%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�:%d\n", b1.price);
	return 0;*/

}