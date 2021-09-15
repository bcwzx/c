#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//0-9
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
			i++;
	}
	


	//printf("%d\n", arr[5]);arr[下标];下标
	//下标从0开始
	return 0;
}