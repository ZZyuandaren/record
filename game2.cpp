#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j]= set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		printf("___");
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		printf("|");
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}

		printf("\n");
	}
}

void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1~9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
	
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1]-8*'0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y,win=0;
	while (win<row*col- EASY_COUNT)
	{
		printf("请输入坐标:\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾你输了\n");
				DisplayBoard(mine, row, col);
				break;
			}			
			else//统计雷
			{
				int count=get_mine_count(mine,x,y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("请重新输入:\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}