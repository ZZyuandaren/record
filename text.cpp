#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 
int main()
{
	int age = 0;
	printf("请输入年龄");
	scanf("%d", &age);
	long long maosu = 0;
	maosu = age * 31560000;
	printf("%lld", maosu);
	return 0;
}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	printf("%d\n", *pa);
//	return 0;
//}
//struct Stu//结构体
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10, b = 20;
//	struct Stu s1 = { "张三",20,"2019010302" };
//	struct Stu* ps = &s1;
//	printf("%s\n", s1.name);//指针
//	printf("%s\n", (*ps).name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//	return 0;
//}
//int get_max(int a,int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 1, b = 2;
//	int c = (a > b, a = b + 3, a);//注意逗号表达式
//	if (c)
//		printf("真");
//	else
//		printf("假");
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}
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