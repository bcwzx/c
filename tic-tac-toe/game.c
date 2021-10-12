#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


//void DisplayBoard(char[ROW][COL], int row, int col);
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1.��ӡһ������
//		printf(" %c | %c | %c", board[i][0], board[i][1], board[i][2]);
//		//2.��ӡһ�зָ���
//		if( i < row-1)
//		printf("---|---|---\n");
//	}
//}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{

		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1.��ӡһ������
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.��ӡһ�зָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
				
			}
			printf("\n");
		}
	}
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����: >\n");
	while (1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d%d", &x, &y);
		//�ж�x��y�ĺ�����
		if (x >= 1 && x <= row && y >=1 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");
	while (1) {
		x = rand() % row;
		y = rand()% col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
		   	break;
		}
	}
}
int  Isfull(char board[ROW][COL], int row, int col)
{
	//����1����
	//����0��û��
	int i = 0;
	int j = 0;
	for(i=0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//û��
			}
		}
	}
	return 1;
}
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//������
	for(i=0;i<row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//������
	for(i=0;i<col;i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return   board[1][i];
		}
	}
	//�����Խ���
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if(board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//�ж��Ƿ�ƽ��
	if(1 == Isfull(board, ROW, COL))
	{
		return  'Q';
	}
	return 'C';
}


