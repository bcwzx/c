#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int tmp = 0;
	printf("before:%d%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("after:%d%d\n", a, b);
	return 0;
}












//int main()
//{
	// & -��2����λ��
	/*int a = 3;
	int b = 5;
	int c = a & b;
	printf("%d\n", c);*/
	// | -��2����λ��
	//*int a = 0;
	//int b = 0;
	//int c = a | b;
	//printf("%d\n", c);
	//return 0;
	// ^  -��2����λ���
    //��ͬΪ0 ����Ϊ1
//	int a = 3;//0011
//	int b = 5;//0101
//	int c = a ^ b;//0110
//	printf("%d\n", c);
//	return 0;
//}












//int main()
//{
	//int a=16;
	//00000000000000000000000000010000
	//int b=a>>2;
	//printf("%d\n", b);
	// >>  ���Ʋ�����
	// ��������   �ұ߶�������߲�ԭ����λ
	// �߼�����   �ұ߶�������߲���
	//�ƶ����Ƕ�����λ
	//int a = -1;
	//int b = a >> 1;
	//printf("%d\n", b);
//ԭ��  10000000000000000000000000000001
//����  11111111111111111111111111111110(������λ��ȡ����1��
//����  11111111111111111111111111111111�������1��


//����  <<��߶������ұ߲���
//	return 0;
//}