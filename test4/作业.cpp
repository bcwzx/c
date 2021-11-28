#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <assert.h>
//杨氏矩阵
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
//	//返回型参数
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是:%d,%d\n", x, y);
//	}
//	else
//	{
//		printf("找不到");
//	}
//	return 0;
//}











//int is_left_move(char* str1, char*str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//strcat 给自己追加字符串的时候，会崩溃
//	//strcat(str1,str1)-> err
//	//1.在str1字符串中追加一个str1字符串
//	strncat(str1, str1, 6);
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
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












//旋转字符串
//暴力求解
//void left_move(char* arr,int k)
//{
//	assert(arr!=NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//1.左旋转一个字符
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		 *(arr + len - 1) = tmp;
//		 //arr-len-1最后一个元素位置
//	}
//}

//2.三部翻转法
//逆序字符串函数 
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
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr, arr + len-1);//逆序整体
//}


//判断一个字符串是否为另一个字符串旋转后的字符串
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







//穷举
//A:B第二，我第三
//B：我第二，E第四
//C：我第一，D第二
//D:C第五，D第三
//E：我第四，A第一
//比赛结束，每个选手说对一半，确定比赛名次
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








//A:不是我
//B:是C
//C：是D
//D：C在胡说
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











//杨辉三角
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
//	//打印
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









//在32位大端模式处理器上b的值
//int main()
//{
//	unsigned int a = 0x1234;
//	// 00 00 12 34 大端存储
//	// 34 12 00 00 小端存储
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
//		//从左边找偶数
//		while ((left < right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右边找奇数
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
//	//买回来的汽水喝掉
//	if (money == 0)
//	
//		total = 0;
//	else
//		total = 2 * money - 1;
//	
	//total = money;
	//empty = money;
	////换回来的汽水
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
//	printf("total=%d\n", total);
//	return 0;
//}










//打印菱形
//int main()
//{
//	int line = 0;
//	//打印上半部分
//	scanf("%d", &line);
//	int i = 0;
//	for (i=0;i<line;i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
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
//		//判断i是否为水仙花数(自幂数）
//		//1.计算i的位数  -n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//                  
//			tmp /= 10;
//		}
//		//3.比较i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
















//计算求和
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








//字符串逆序
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
//	printf("逆序后排序的字符串:%s\n", arr);
//	return 0;
//}
