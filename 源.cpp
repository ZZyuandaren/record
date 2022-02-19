#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int my_strlen(char arr[])
{
	int count = 0;
	int i = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
void charge(char arr[])
{
	int left = 0;
	int right=my_strlen(arr)-1;
	while (left < right)
	{
		char tem = arr[left];
		arr[left] = arr[right];
		arr[right] = tem;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";
	charge(arr);
	printf("%s\n", arr);
	return 0;
}
//void print_table(int n)
//{
//	int i, j;
//	for (i = 1; i <=n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			printf("%d*%d=%-3d", i, j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//void change(int m)
//{
//	int i=0;
//	printf("奇数位 \n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	} 
//	printf("\n");
//	printf("偶数位 \n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	change(m);
//	return 0;
//}
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