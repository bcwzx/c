#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{	




	return 0;
}






//дһ��������a�Ķ����ƣ�����)���м���1
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}





//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//				count++;
//		}
//	}
//	return count;
//}
//



//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	system("pause");//�⺯����ִ�����pause
//	return 0;
//}





//int main()
//{
//	int a, b, c; 
//	a = 5;
//	c = ++a;//a=6  c=6
//	b = ++c, c++, ++a, a++;//   b=7  c=8  a=8
//	b += a++ + c;  //b=23  a=8->9   c=8 
//	return 0;
//}







//int i;
//int main()
//{
//	i--;
//	//  -1
//	if (i > sizeof(i))  //sizeof()�������/������ռ�ڴ�Ĵ�С   >=0  �޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}











//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;//ÿ�η���һ���ַ�
//	printf("%x\n", a);//44 33 22 11->  00 33 22 11->  11 22 33  00
//	return 0;
//}







//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short *p = (short*)arr;
//	//short *���͵�ָ�����۵ģ�+1���������ǣ������ã�������2���ֽ�
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i)=0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}