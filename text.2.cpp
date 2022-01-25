#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int my_strlen(char* str)//用递归法求字符串长度
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "12gfw";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}
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