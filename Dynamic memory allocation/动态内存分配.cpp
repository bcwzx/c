#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//������
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		//�Ƿ������ڴ�
//		//str�Ѿ�free���ռ��ѻ�������ϵͳ���ڽ�world������str�ϣ��Ƿ�����
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}









//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й©
//	//��
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//    return 0;
//}














//2.�Ƿ������ڴ�
//char* GetMemory(void)  GetMemoryָ�����ջ�ڴ�
//{
//	char p[] = "hello world";
//	return p;
//	//��Ȼ�з���p�������������Ѿ������٣������ݲ���֪��str�Ƿ������ڴ�
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}





//int* test()
//{
//	//static int a=10; ��̬��
//	int a = 10;//ջ��
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p= 20;
//	return 0;
//}







//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	
//}
//����1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
// *p=str
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str= NULL;
//}
//����2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}







//int main()
//{
//	//realloc ֱ�ӿ��ٿռ�
//	int* p =(int*)realloc(NULL, 40);
//	return 0;
//}









//��̬�ڴ����ʱ�Ĵ���
//int main()
//{
	//1.�Կ�ָ��Ľ����ò���
	//int* p = (int*)malloc(20);
	//p������ص��ж�
	////*p=10;  //err->��һmalloc����ʧ���ˣ�p�ͱ���ֵΪNULL
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;
	


	//2.�Զ�̬�����ڴ��Խ�����
	/*int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
	}
	free(p);
	p = NULL;*/

	//3.�ԷǶ�̬�����ڴ�ʹ��free����
	/*int a = 0;
	int* p = &a;
	*p = 20;
	free(p);
	p = NULL;*/


	//4.free�ͷŶ�̬�����ڴ��һ����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*p++ = i;//pָ���λ�ñ仯��ѭ��������ָ�����һλ

	//	}
	//	free(p);
	//	p = NULL;


	//5.��ͬһ���ڴ����ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//free(p);
	////p=NULL �ͷ�����ΪNULL
	//free(p);


	//6.��̬�����ڴ������ͷ�(�ڴ�й©)
	/*while (1)
	{
		malloc(1);
	}
		return 0;
	}
	return 0;
}*/









//���ڶ��Ͽ��ٿռ�
//int main()
//{
//	int*p =(int*) malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i<5; i++)
//		{
//			*(p + i)=i;
//		}
//	}
//	//realloc ������̬�����ڴ�ռ�Ĵ�С
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻�Ŀռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//	//��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.������һ���µı���������realloc�����ķ���ֵ
//	int*ptr =(int*) realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			 *(p + i)=i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}











//int main()
//{
//	//malloc(10*sizeof(int))
//	int*p=(int*)calloc(10, sizeof(int));//calloc��Ԫ�س�ʼ��Ϊ0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}







//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��Ҫ��������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//}