#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void change(int m)
{
	int i=0;
	printf("奇数位 \n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	} 
	printf("\n");
	printf("偶数位 \n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	change(m);
	return 0;
}
//int compare(int a, int b)
//{
//	int tem = a ^ b;
//	int count = 0;
//	while (tem)
//	{
//		tem = tem & (tem - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int count = compare(a, b);
//	printf("%d",count);
//}
//int count_bit_one(int n)
//{
//	int count=0,x=1;
//	int i;
//	for(i=0;i<32;i++)
//	{
//		if (n & x)
//		{
//			count++;
//		}
//		x = 1 << x;
//	}
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}