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
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//--�⺯��strcmp
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���ξ���½ʧ�ܣ��˳�����\n");
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
//		system("cls");//systemִ�������һ��������cls���
//		left++;
//		right--;
//	}
//	return 0;
//}





//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//		break;
//	}
//}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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






//n�Ľ׳�
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