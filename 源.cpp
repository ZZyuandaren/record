#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int re = 0;
	char password[10] = { 0 };
	printf("输入密码\n");
	scanf("%s", password);
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认(Y/N)：");
	re = getchar();
	if (re == 'Y')
		printf("确认\n");
	else
		printf("确认失败\n");

	return 0;
}
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