#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
void menu()
{
	printf("*************************************\n");
	printf("****** 1.add        2.sub    ********\n");
	printf("*******3.mul        4.div    ********\n");
	printf("*******5.xor        0.exit   ********\n");
	printf("*************************************\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	//pfArr��һ������ָ�����飨ת�Ʊ�
	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
	do {
		menu();
		printf("������\n");
		scanf("%d", &input);
		if (input>=1 && input<=5)
		{
			printf("����������������:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
	   } while (input);
	   return 0;
}










//char* my_strcpy(char* dest, const char* src)
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
////2.дһ������ָ������pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//{
//	//1.char* (*pf)(char*,const char*) = my_strcpy;
//	//2.char*(*pfArr[4])(char*,const char*)=my_strcpy;
//}


	
	




//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//����ָ�������  ->����ͬ�����ĵ�ַ����һ�����鵱�У�
//int main()
//{
//	int* arr[5];
//	int (*pa)(int, int) = Add;//Sub,Mul,Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2,3));
//	}
//	return 0;
//}






//   1.(*(void(*)())0)() ->��0ǿ������ת����void(*)()�ĺ���ָ������ -0����һ�������ĵ�ַ
//����0��ַ���ĸú���
//2.void(*signal(int ,void(*)(int)))(int )
//signal��һ����������
//signal�����Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������int
//signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void


//2�ļ�  typedef void(*pfun_t)(int);
//pfun_t signal(int ,p_fun_t)






//void Print(char*str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//   void (*p)(char*) = Print;
//  (*p)("hello bit"); 
//	return 0;
//}



//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
////����ָ��  -ָ������ָ��,��ź�����ַ��һ��ָ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}






//��ά���鴫��
//void test(int** p)
//{
//}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);//��һ��һ��ָ������ĵ�ַ
//	test(pp);//��һ������ָ�����
//	int* arr[10];
//	test(arr);//��һ��ָ������
//	return 0;
//}







//int main()
//{
//    //�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//ָ������
//	int* arr[10];
//	char* ch[5];
//	//����ָ�� -ָ������
//	//int *p3;//����ָ��-ָ�����ε�ָ��
//	//int *p4;//�ַ�ָ�� -ָ���ַ���ָ��
//	int arr2[5];
//	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
//	return 0;
//}












//int arr[5];  //arr��5��Ԫ�ص���������
//int* parr1[10]; //parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*,parr1��ָ������
//int(*parr2)[10];//parr2��һ��ָ�룬��ָ��ָ���һ�����飬���������10��Ԫ�أ�ÿ��Ԫ�ص�������int   -parr2������ָ��
//int(*parr3[10])[5];//parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ���������5��Ԫ�أ�ÿ��Ԫ����int
   //    int(*)[5]  +   parr3[10]










//�������������ʽ
//void print1(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//			for (j = 0; j < y; j++)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			printf("\n");
//	}
//}
////������ָ�����ʽ
//void print2(int(*p)[5],int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			/*printf("%d ", *(*(p + i) + j));*/
//			printf("%d ",p[i][j]);
//		}
//		printf("\n");
//	}
//}
////����ָ�� ��ָ�룬����ָ������
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);





	//int arr[10] = {};
	//arr-��Ԫ�ص�ַ
	//&arr[0]-��Ԫ�ص�ַ
	//&arr-����ĵ�ַ
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;*/
	/*char* arr[5];
	char*(*pa)[5] = &arr;*/
//	return 0;
//}





//ָ������ �������������ָ���
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;  
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}








//int main()
//�ַ�ָ��
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "abdcef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1==p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}






//int main()
//{
//	const char *p = "abcdef";//abcdef->�����ַ���
//	printf("%c\n", *p);
//	printf("%s\n", p);
//
//	return 0;
//}