#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<windows.h>

void swap(int *pa, int *pb)//指针和自定义函数运用
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10, b = 20;
	printf("%d %d\n", a, b);
	swap(&a,&b);
	printf("%d %d\n", a, b);
	return 0;
}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "####";
//	strcpy(arr2, arr1);
//	printf("%s%s", arr1, arr2);
//	return 0;
//}
//int main()//打印乘法表
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { -1,2,3,4,-5,6,7,8,9 ,38,47};
//	int max=arr[0],i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	double sum=0;
//	int i=0;
//	int n = 1;
//	for (i = 1; i < 101; i++)
//	{
//		sum += n*1.0 / i;
//		n = -n;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//int main()
//{
//	int i, count=0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j;
//		for (j = 2; j < i/2; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>i/2)
//		{
//			count++;
//			printf("%d\n", i);
//
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a, b,n;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int tam = 0;
//		tam = b;
//		b = a;
//		a = tam;
//	}
//	while (a % b != 0)
//	{
//		n = a % b;
//		a = b;
//		b = n;
//	}
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int i,a;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("三的倍数：%d\n", i);
//	}
//
//	return 0;
//}
//int main()//比大小
//{
//	int a, b, c,d;//a b c 
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		int tem = 0;
//		tem = b;
//		b = a;
//		a = tem;
//	}
//	if (a < c)
//	{
//		int tem = 0;
//		tem = c;
//		c = a;
//		a = tem;
//	}
//	if (b < c)
//	{
//		int tem = 0;
//		tem = c;
//		c = b;
//		b = tem;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	while(left<=right)
//	{ 
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//停一秒
//		Sleep(1000);
//		right--;
//		left++;
//	}
//	return 0;
//
//}
//int main()//   二分法
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid + 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//				break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	
//	return 0;
//}
//int main()//阶乘题
//{
//	int i;
//	int n, ret=1, sum=0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = 1;
//		for (n = 1; n <=i; n++)
//		{
//			ret = ret * n;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()//求n的阶乘
//{
//	int n = 0;
//	int a = 1;
//	int i;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		a = a * (i + 1);
//	}
//	printf("n的阶乘=%d", a);
//	return 0;
//}
//
//}
//int main()
//{
//	int re = 0; 
//	char password[10] = { 0 };
//	printf("输入密码\n");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N)：");
//	re = getchar();
//	if (re == 'Y')
//		printf("确认\n");
//	else
//		printf("确认失败\n");
//
//	return 0;
//}
//int main()//循环for语句练习
//{
//	int i;
//	int m;
//	for (m = 1; m < 6; m++)
//	{
//		for (i = 0; i < m; i++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//		
//	return 0;
//}
//int main()//switch语句学习
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:printf("输入错误\n");
//	}
//	return 0;
//}
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
	/*int b;
	int a=3;
	b = a % 2;
	if (b != 0)
		printf("奇数\n");
	else
		printf("偶数\n");
	return 0;
}*/
//{
//	int age = 55;
//	if (age < 18)
//		printf("未成年\n");
//	else if(age>=18 && age<=28 )
//		printf("青年\n");
//	else if (age >= 28 && age <= 50)
//		printf("壮年\n");
//	else if (age >= 50 && age <= 90)
//		printf("老年\n");
//	return 0;
//}
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55};
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 35;
//	printf("价格gaiwei：%d元\n", b1.price);
//	return 0;
//}
//void jolly()
//{
//	printf("For he`s a jolly good follow !\n");
//}
//void deny()
//{
//	printf("which nobody can deny !\n");
//}
//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}

//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
//void text()
//{
//	static int a = 1;//static 修饰局部变量，局部变量生命周期变长。
//	//static修饰全局变量，改变作用域。
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		text();
//		i++;
//	}
//	return 0;
//}
// 逻辑或 || 逻辑与&&
//	int a=2;
//	int b=a++;
//	printf("%d\n %d", a, b);
//	return 0;
//}
////原码，反码，补码
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", a);
//	printf("%d", b);
//	return 0;
//}
////{
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 3;
//	if (a > b)
//	    printf("最大值%d",a);
//	else
//		printf("最大值%d",b);
//
//	return 0;
//}
//{
//	int line = 0;
//	printf( "加入比特\n");
//	while (line < 5000)
//	{
//		line++;
//		printf("敲代码\n");
//	}
//	printf("拿offer\n");
//	return 0;
//}