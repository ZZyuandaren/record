#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//#define TEN 10
//int main()
//{
//	int n = 0;
//	while (n++ < TEN)
//	{
//		printf("%5d\n", n);
//
//	}
//	return 0;
//}

//void Printf(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz-1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//}
//void Init(int arr[])
//{
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	Init(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Printf(arr,sz);//打印
//	reverse(arr,sz);//交换数组元素
//	Printf(arr,sz);
//	return 0;
//}
//int main()
//{
//	int a = 4,b=5,c=9;
//	int* arr[] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf(" % d", *(arr[i]));
//	}
//	return 0;
//}

//int my_strlen(char*str)
//{
//	char* start=str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
 
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i=0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 1;
//		p += 1;
//		
//	}
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	while (input>=0)
//	{
//		printf("请输入时间（单位分钟）：\n");
//		scanf("%d", &input);
//		if (input > con)
//		{
//			printf("小时：%d分钟:%d\n", input % con, input / con);
//		}
//		else
//			printf("分钟：%d\n", input);
//	}
//	return 0;
//}
//int main()
//{
//	char c1, c2;
//	int diff;
//	float num;
//	c1 = 's';
//	c2 = 'o';
//	diff = c1 - c2;
//	num = diff;
//	printf("%c%c%c:%d%3.2f\n", c1, c2, c1, diff, num);
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	printf("请输入年龄");
//	scanf("%d", &age);
//	long long maosu = 0;
//	maosu = age * 31560000;
//	printf("%lld", maosu);
//	return 0;
//}
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