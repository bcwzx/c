#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>






//������������
//int  main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}












//��������exec((v1,v2),(v3,v4),v5,v6);�У�ʵ�θ���:v2��v4,v5,v6;
//���ű��ʽֻ�������ұߵĲ���









//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i];
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//	int main()
//	{
//		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//		int sz = sizeof(arr)/sizeof(arr[0]);
//		Init(arr, sz);//�������ʼ��
//		Print(arr, sz);//��ӡ����
//		Reverse(arr, sz);//����
//		Print(arr, sz);
//	return 0;
//}