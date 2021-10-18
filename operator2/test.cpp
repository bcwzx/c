#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int ));
	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(arr));//4×10=40
	printf("%d\n", sizeof(int [10]));
	return 0;
}





//int main()
//{
//	int a = 10;
//	int* p = &a;//&取地址操作符
//	*p = 20; //解引用操作符
//	return 0;
//}




//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	//统计num的补码中有几个1  
//	/*while (num)  
//	{
//		if (num % 2 == 1)  
//			count++;  
//		num = num / 2; 
//	}*/
//	printf("%d\n", count);
//	return 0;
//}