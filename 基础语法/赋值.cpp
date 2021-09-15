#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
    //单目操作符  
	//双目操作符
	//三目操作符
	int main()
	{

		int arr[10] = { 0 };
		int sz = 0;
		/*int a = 10;*/
		printf("%d\n", sizeof(arr));
		//所占空间大小，单位字节
       //计算数组元素个数=数组总大小除以每个元素的大小
		sz = sizeof(arr) / sizeof(arr[0]);
			printf("sz=%d\n", sz);




		//int a = 10;
		//int b = 10;
		//a + b; //+双目操作符
		//c语言表示真假
		//0表示假
		//非0表示真
		//int a = 0;
		//int a = -2;
		//int b = -a;
		//int c = +3;
		//printf("%d\n", a);
		//printf("%d\n", !a);//逻辑反操作





	
	//int a = 10;
	//a = 20;//=赋值  ==判断相等
	//a = a + 10;
	//a += 10;
	//a = a - 10;
	//a -= 10;
	//a = a & 2;
	//a &= 2;
	return 0;
}