#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//--库函数strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次均登陆失败，退出程序\n");
//		return 0;
//	}
//}






//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bite!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//system执行命令的一个函数，cls清空
//		left++;
//		right--;
//	}
//	return 0;
//}





//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while(left<=right)
//	{
//	int mid = (left + right) / 2;
//	if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", mid);
//		break;
//	}
//}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}













//1!+2!+3!+++++++10!
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n=1;n<=10;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret; 
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}






//n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//		for(i=1;i<n;i++)
//	{
//			ret = ret * i;
//	}
//		printf("ret=%d\n", ret);
//	return 0;
//}