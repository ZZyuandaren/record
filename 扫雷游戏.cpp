#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game2.h"

void game()
{
	//�洢��
	//1���ú��� 
	// 2�Ų���׵���Ϣ
	char mine[ROWS][COLS] = {0};//11*11
	char show[ROWS][COLS] = { 0 }; 
	//��ʼ��
	InitBoard( mine, ROWS, COLS, '0');
	InitBoard( show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//����
	Setmine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
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
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);
}

int main()
{
	text();
	return 0;
}
