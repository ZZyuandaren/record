#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void menu()
{
	printf("######################\n");
	printf("### 1 play  0 exit ###\n");
	printf("######################\n");
}
void game()
{
	//1,���������
	//2��������
	int guess=0;
	int ret = rand();
	ret = ret % 100 + 1;

	while (1)
	{
		printf("�����\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess == ret)
		{
			printf("�¶���\n");
			break;
		}
		
	}
}
int main()
{
	int input;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}