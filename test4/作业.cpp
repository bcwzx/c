#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <assert.h>
//���Ͼ���
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (y >= 0 && x <=*px - 1)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	//�����Ͳ���
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���:%d,%d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}











//int is_left_move(char* str1, char*str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//strcat ���Լ�׷���ַ�����ʱ�򣬻����
//	//strcat(str1,str1)-> err
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	strncat(str1, str1, 6);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	char*ret=strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}












//��ת�ַ���
//�������
//void left_move(char* arr,int k)
//{
//	assert(arr!=NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//1.����תһ���ַ�
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		 *(arr + len - 1) = tmp;
//		 //arr-len-1���һ��Ԫ��λ��
//	}
//}

//2.������ת��
//�����ַ������� 
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k < len);
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr, arr + len-1);//��������
//}


//�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת����ַ���
//int  is_left_move(char* s1,char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 4);
//	printf("%s\n", arr);
//	return 0;
//}







//���
//A:B�ڶ����ҵ���
//B���ҵڶ���E����
//C���ҵ�һ��D�ڶ�
//D:C���壬D����
//E���ҵ��ģ�A��һ
//����������ÿ��ѡ��˵��һ�룬ȷ����������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for(c=1;c<=5;c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if(((b==2)+(a==3)==1)&&
//							((b==2)+(e==4)==1)&&
//							((c==1)+(d==2)==1)&&
//							((c==5)+(d==3)==1)&&
//							((e==4)+(a==1)==1))
//						{ 
//							if (a * b * c * d * e == 120)
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							
//						}
//					}
//				}
//			}
//		}
//
//	}
//
//	return 0;
//}








//A:������
//B:��C
//C����D
//D��C�ں�˵
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') +(killer == 'd') + (killer != 'd')==3)
//		{
//			printf("%c\n", killer);
//        }
//	}
//	return 0;
//}











//�������
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i-1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}









//��32λ���ģʽ��������b��ֵ
//int main()
//{
//	unsigned int a = 0x1234;
//	// 00 00 12 34 ��˴洢
//	// 34 12 00 00 С�˴洢
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d", b);
//	return 0;
//}
//









//int main()
//{
//	unsigned char  a = 200;
//	unsigned char  b = 100;
//	unsigned char  c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}












//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//�������ż��
//		while ((left < right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ұ�������
//		while ((left < right)&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}












//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	if (money == 0)
//	
//		total = 0;
//	else
//		total = 2 * money - 1;
//	
	//total = money;
	//empty = money;
	////����������ˮ
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
//	printf("total=%d\n", total);
//	return 0;
//}










//��ӡ����
//int main()
//{
//	int line = 0;
//	//��ӡ�ϰ벿��
//	scanf("%d", &line);
//	int i = 0;
//	for (i=0;i<line;i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}







//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���(��������
//		//1.����i��λ��  -nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//                  
//			tmp /= 10;
//		}
//		//3.�Ƚ�i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
















//�������
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}








//�ַ�������
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//	 
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);
// //gets(arr);
//	reverse(arr);
//	printf("�����������ַ���:%s\n", arr);
//	return 0;
//}
