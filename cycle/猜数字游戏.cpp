#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	//1���������
	//��ʱ�����������������������
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	//printf("%d\n", ret);
	
	//2������
	while (1)
	{
		printf("������\n");
		scanf("%d", &guess);
		
		if (guess > ret)
		{
			printf("�´���");
		}
		else if (guess < ret)
		{
			printf("��С��");
		}
		else
		{
			printf("�¶���");
			break;
		}
		
	}
}
void menu()
{
	printf("****************************\n");
	printf("****1.play   0.exit  *******\n");
	printf("****************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
	    scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳�����");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	}
	while (input);
	return 0;
}