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
//	//paָ���һ��Ԫ��char*->"work"�е�w
//	pa++;
//	//ָ��ڶ���Ԫ��
//	printf("%s\n", *pa);
//	//��aΪ��ʼ����ӡһ���ַ��� at
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
//	int a[3][2] = { {0,1},{2,3},{4,5} };//���ű��ʽ��ʵ����ֻ�洢��  1,3,5����ȫ0
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
//	//ptr-1ȡ���ĵ�ַΪ����4�ĵ�ַ
//	//*ptr2 ����00 00 00 02
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
////����p��ֵ��0x100000
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x10000;
//	printf("%p\n", p + 0x1); //0x10000+20=0x100010
//	printf("%p\n", (unsigned long)p + 0x1);//+1
//	printf("%p\n", (unsigned int*)p + 0x1);//+4  ����һ��int*
//}






//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	//&a+1������������
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	//ptr-1Ϊ��5�ĵ�ַ
//	return 0;
//}