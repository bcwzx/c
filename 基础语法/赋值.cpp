#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
    //��Ŀ������  
	//˫Ŀ������
	//��Ŀ������
	int main()
	{

		int arr[10] = { 0 };
		int sz = 0;
		/*int a = 10;*/
		printf("%d\n", sizeof(arr));
		//��ռ�ռ��С����λ�ֽ�
       //��������Ԫ�ظ���=�����ܴ�С����ÿ��Ԫ�صĴ�С
		sz = sizeof(arr) / sizeof(arr[0]);
			printf("sz=%d\n", sz);




		//int a = 10;
		//int b = 10;
		//a + b; //+˫Ŀ������
		//c���Ա�ʾ���
		//0��ʾ��
		//��0��ʾ��
		//int a = 0;
		//int a = -2;
		//int b = -a;
		//int c = +3;
		//printf("%d\n", a);
		//printf("%d\n", !a);//�߼�������





	
	//int a = 10;
	//a = 20;//=��ֵ  ==�ж����
	//a = a + 10;
	//a += 10;
	//a = a - 10;
	//a -= 10;
	//a = a & 2;
	//a &= 2;
	return 0;
}