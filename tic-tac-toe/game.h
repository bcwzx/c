#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char[ROW][COL], int row, int col);
void PlayerMove(char[ROW][COL], int row, int col);
void ComputerMove(char[ROW][COL], int row, int col);


//告诉我们四种赢的方式
//1.玩家赢"*"
//2.电脑赢"#"
//3.平局"Q"
//4.继续游戏"C"

char Iswin(char board[ROW][COL], int row, int col);