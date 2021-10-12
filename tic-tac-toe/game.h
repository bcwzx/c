#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//����
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char[ROW][COL], int row, int col);
void PlayerMove(char[ROW][COL], int row, int col);
void ComputerMove(char[ROW][COL], int row, int col);


//������������Ӯ�ķ�ʽ
//1.���Ӯ"*"
//2.����Ӯ"#"
//3.ƽ��"Q"
//4.������Ϸ"C"

char Iswin(char board[ROW][COL], int row, int col);