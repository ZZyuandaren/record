#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	return 0;
}
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

//int main()//统计二进制内存中的1个数
//{
//	int num= 0;
//	scanf("%d", &num);
//	int bj = 1;
//	int count = 0;
//	while (bj <= num)
//	{
//		int x = bj & num;
//		if (x != 0)
//		{
//			x = 1;
//		}
//		bj = 1 << bj;
//		count = count + x;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	printf("%d", a);
//	b = a ^ b;
//	printf("%d", b);
//	a = a ^ b;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a | b;
//	printf(" % d",  c);
//	 c = a & b;
//	printf(" % d",  c);
//	c = a ^ b;
//	printf("  % d", c);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf(" % d % d % d", a, b, c);
//	return 0;
//}
//int main()
/*
	int a = 3;
	int b = 5;
	int c = a & b;
	printf(" % d % d % d", a, b, c);
	return 0;
}*/
//int main()
//{
//	int a = 4;
//	int b =1 << a;
//	printf("%d %d", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 16;
//	int b = a >> 2;
//	printf("%d %d", a, b);
//	return 0;
//}