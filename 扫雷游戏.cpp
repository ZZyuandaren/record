#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game2.h"

void game()
{
	//存储雷
	//1布置好雷 
	// 2排查出雷的信息
	char mine[ROWS][COLS] = {0};//11*11
	char show[ROWS][COLS] = { 0 }; 
	//初始化
	InitBoard( mine, ROWS, COLS, '0');
	InitBoard( show, ROWS, COLS, '*');
	//打印雷盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布雷
	Setmine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);
	
}
void menu()
{
	printf("**************************\n");
	printf("******   1,play    *******\n");
	printf("******   0,exit    *******\n");
	printf("**************************\n");
}
void text()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
}

int main()
{
	text();
	return 0;
}
