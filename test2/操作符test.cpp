#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//ʹ��ָ���ӡ�������ݣ���ʹ�������±꣬ʹ��ָ��
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}









//��ȡһ����������������λ��ż��λ
//void print(int m)
//{
//	int i = 0;
//	printf("����λ:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}





//int get_diff_bit(int m,int n)
//{
//int tmp = m ^ n;//���
//int count = 0;
//while (tmp)
//{
//	tmp = tmp & (tmp - 1);
//	count++;
//}
//return count;
//}
////��������в�ͬλ�ĸ���
//int main()
//{	
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}






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