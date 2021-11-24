#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>







//int main()
//{
//	const char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	const char** cp[] = { c + 3,c + 2,c + 1,c };
//	const char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}













//int main()
//{
//	const char* a[] = { "work","at","alibaba" };
//	const char** pa = a;
//	//pa指向第一个元素char*->"work"中的w
//	pa++;
//	//指向第二个元素
//	printf("%s\n", *pa);
//	//以a为开始，打印一个字符串 at
//	return 0;
//}








//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}





//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}





//int main()
//{
//	int a[3][2] = { {0,1},{2,3},{4,5} };//逗号表达式，实际上只存储了  1,3,5后面全0
//	int* p;
//	p = a[0];//1
//	printf("%d\n", p[0]);//p[0]-> *(p+0)=1
//	return 0;
//}






//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x",ptr1[-1], *ptr2);
//	//  01 00 00 00   02 00 00 00   03 00 00 00    04 00 00 00
//	//ptr1[-1]->*(ptr+(-1))->*(ptr-1)
//	//ptr-1取到的地址为遍历4的地址
//	//*ptr2 遍历00 00 00 02
//	return 0;
//}










//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值是0x100000
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x10000;
//	printf("%p\n", p + 0x1); //0x10000+20=0x100010
//	printf("%p\n", (unsigned long)p + 0x1);//+1
//	printf("%p\n", (unsigned int*)p + 0x1);//+4  跳过一个int*
//}






//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	//&a+1跳过整个数组
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	//ptr-1为到5的地址
//	return 0;
//}