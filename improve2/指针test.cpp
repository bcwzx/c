#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//������������
//1.sizeof(��������
//2.&(������)
//3.����֮�����е�����������ʾ��Ԫ�صĵ�ַ
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//�����һ�еĴ�С 16
//	printf("%d\n", sizeof(a[0]+1));//a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ����ַ��С��4
//	printf("%d\n", sizeof(*a[0]+1));// *(a[0]+1�ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a+1));//a�Ƕ�ά���飬û��sizeof��������Ҳû��&(������),����a����Ԫ�ص�ַ���Ѷ�ά���鿴��һά����ʱ��
//	//��ά�������Ԫ�ص�ַ�ǵ�һ�У�a+1���ǵڶ��еĵ�ַ  4
//	printf("%d\n", sizeof(*(a+1)));//16  a[1]�ڶ��еĵ�ַ
//	printf("%d\n", sizeof(&a[0]+1));//4 �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  �ڶ��еĴ�С
//	printf("%d\n", sizeof(*a));//a����Ԫ�ص�ַ����һ�е�ַ��*a���ǵ�һ�� sizeof��*a�����Ǽ����һ�д�С
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}













//int main()
//{
//    const char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p+1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p+1));//���ֵ
//	printf("%d\n", strlen(&p[0]+1));//5






//	const char* p = "abcdef";
//	printf("%d\n", sizeof(p));//   4/8  ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p+1));  //4/8  p+1�õ������ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));// *p�����ַ�����һ���ַ� ��a��
//	printf("%d\n", sizeof(p[0]));// int arr[10]; arr[0]==*(arr+0)  p[0]=*(p+0)=='a'
//	printf("%d\n", sizeof(&p));//  4/8 p�ĵ�ַ
//	printf("%d\n", sizeof(&p+1));//  4/8  ����p��ַ
//	printf("%d\n", sizeof(&p[0]+1));//  4/8  b�ĵ�ַ
//	return 0;
//}





//int main()
//{
//	char arr[] = "abcdef";
//		printf("%d\n", strlen(arr));//6
//		printf("%d\n", strlen(arr+0));//6
//		/*printf("%d\n", strlen(*arr)); err 
//		printf("%d\n", strlen(arr[1]));*/  //err
//		printf("%d\n", strlen(&arr));//  6
//		printf("%d\n", strlen(&arr+1));// ����\0�������������ֵ
//		printf("%d\n", strlen(&arr[0]+1));// 5 ��b�ĵ�ַ��������5���ַ�
//		return 0;
//}









//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); //7
//	printf("%d\n", sizeof(arr+0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));// 1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr+1));//4/8
//	printf("%d\n", sizeof(&arr[0]+1)); //4/8
//	return 0;
//}






//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr+0));//���ֵ
//	printf("%d\n", strlen(*arr)); err
//	printf("%d\n", strlen(arr[1])); err
//	printf("%d\n", strlen(&arr)); ���ֵ
//	printf("%d\n", strlen(&arr+1));���ֵ ������һ������ -6
//	printf("%d\n", strlen(&arr[0]+1));���ֵ �ӵڶ�����ʼ -1
//	return 0;
//}








//�ַ�����
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));  //  4/8
//	printf("%d\n", sizeof(*arr)); // arr��Ԫ�ص�ַ��*arr����Ԫ�أ���Ԫ�ش�С��һ���ֽ�  1
//	printf("%d\n", sizeof(arr[1]));//  1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1)); //�������������ĵ�ַ  4/8
//	printf("%d\n", sizeof(&arr[0] + 1)); //�ڶ���Ԫ�صĵ�ַ 4/8
//}












//һά����
//int main()
//{
//	int a[] = { 1,2,3,4 };//4*4=16
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));// 4/8
//	printf("%d\n", sizeof(*a));//  4/8
//	printf("%d\n", sizeof(a+1));// a+1��ʾ�ڶ���Ԫ�صĵ�ַ  4/8
//	printf("%d\n", sizeof(a[1]));// �ڶ���Ԫ�صĴ�С 4/8
//	printf("%d\n", sizeof(&a));// 4/8
//	printf("%d\n", sizeof(*&a)); //16
//	printf("%d\n", sizeof(&a+1));// &a������ĵ�ַ����Ȼ&a+1�����������飬���ǻ��ǵ�ַ�����Ի���4/8
//	printf("%d\n", sizeof(&a[0]));// 4/8
//	printf("%d\n", sizeof(&a[0]+1)); //4/8
//	return 0;
//}