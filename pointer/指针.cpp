#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ָ��-ָ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[10] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//
//	return 0;
//}





//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p-=2;
//	}
//	return 0;
//}








// Ұָ��
//ָ��ָ����ڴ�ռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p=test();
//	*p = 20;
//	return 0;
//}
//
//
//
//
//
//ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++) = i;
//	}
//	return 0;
//}
//
//
//
//
//
//
//
//ָ��δ��ʼ��
//int main()
//{
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}








//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//  ����������Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc); 
//	printf("%p\n", pc+1);
//	return 0;
//}
//ָ������;�����ָ����ǰ���������һ���ж���ֽڣ�









//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʵĿռ��С
// int *  *p����4���ֽ�
// char* *p����1���ֽ�
//double*  *p����8���ֽ�








//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ�����
//	return 0;
//}