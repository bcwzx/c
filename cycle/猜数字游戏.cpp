#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	//1生成随机数
	//拿时间戳来设置随机数的生成起点
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	//printf("%d\n", ret);
	
	//2猜数字
	while (1)
	{
		printf("猜数字\n");
		scanf("%d", &guess);
		
		if (guess > ret)
		{
			printf("猜大了");
		}
		else if (guess < ret)
		{
			printf("猜小了");
		}
		else
		{
			printf("猜对了");
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
		printf("请选择>:");
	    scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出程序");
			break;
		default:
			printf("选择错误");
			break;
		}
	}
	while (input);
	return 0;
}