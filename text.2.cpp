#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"game.h"


void game()
{
	//数组——放棋盘信息
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
		//打印棋盘
		Displayboard(board,ROW,COL);

}
void menu()
{
	printf("****************************\n");
	printf("***1 ,开始游戏 0 ,退出游戏***\n");
	printf("****************************\n");
}

void text()
{
	int input = 0;
	do
	{
		
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("三子棋\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
					break;
			default:
				printf("选择错误,请重新选择！\n");
				break;
				
		}

	} while (input);
}
int main()
{
	text();
	return 0;
}
//void bubble_sort(int arr[],int sz)
//{
//	int flag = 1;
//	int i ;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j;
//		for (j = 0; j <sz-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;
//			}
//			
//		}
//		if (flag != 0)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = {76,45,9,8,7,6,5,4,3,2,1,0};
////对arr排序；
//	int i=0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()//数组的学习和应用
//{
//	int arr[3][4] = { {1,2,3},{4,5 },{7} };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]= %p\n",i,j, &arr[i][j]);
//		}
//		
//	}
//	return 0;
//}
//int main()//数组的学习和应用
//{
//	int arr[3][4] = { {1,2,3},{4,5 },{7} };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0};
//	int i = 0;
//	int len = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] ="abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
 //void hanoi(int n, char a, char b, char c)       //这里代表将a柱子上的盘子借助b柱子移动到c柱子
 //  {  if (1 == n)                                //如果是一个盘子直接将a柱子上的盘子移动到c
 //         {
	//             printf("%c-->%c\n", a, c);
	//           }
 //       else
 //           {
	//              hanoi(n - 1, a, c, b);         //将a柱子上n-1个盘子借助c柱子，移动到b柱子
	//              printf("%c-->%c\n", a, c);     //再直接将a柱子上的最后一个盘子移动到c
	//              hanoi(n - 1, b, a, c);         //然后将b柱子上的n-1个盘子借助a移动到c
	//           }
 //  }
 //int main()
 //  {  int  n;
 //      printf("Input the number of diskes:");
 //      scanf("%d", &n);
 //      hanoi(n, 'A', 'B', 'C');
 //      return 0;
 //  }


//int fb(int n)
//{
//	int a = 1, b = 1, c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fb(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int fb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fb(n-1)+fb(n-2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fb(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int my_strlen(char* str)//用递归法求字符串长度
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "12gfw";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int num=0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}