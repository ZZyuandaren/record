#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int re = 0;
	char password[10] = { 0 };
	printf("��������\n");
	scanf("%s", password);
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ��(Y/N)��");
	re = getchar();
	if (re == 'Y')
		printf("ȷ��\n");
	else
		printf("ȷ��ʧ��\n");

	return 0;
}
//int main()//ѭ��for�����ϰ
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
//int main()//switch���ѧϰ
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:printf("�������\n");
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
		printf("����\n");
	else
		printf("ż��\n");
	return 0;
}*/
//{
//	int age = 55;
//	if (age < 18)
//		printf("δ����\n");
//	else if(age>=18 && age<=28 )
//		printf("����\n");
//	else if (age >= 28 && age <= 50)
//		printf("׳��\n");
//	else if (age >= 50 && age <= 90)
//		printf("����\n");
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
//	struct Book b1 = { "C���Գ������",55};
//	printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 35;
//	printf("�۸�gaiwei��%dԪ\n", b1.price);
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
//	static int a = 1;//static ���ξֲ��������ֲ������������ڱ䳤��
//	//static����ȫ�ֱ������ı�������
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
// �߼��� || �߼���&&
//	int a=2;
//	int b=a++;
//	printf("%d\n %d", a, b);
//	return 0;
//}
////ԭ�룬���룬����
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
//	    printf("���ֵ%d",a);
//	else
//		printf("���ֵ%d",b);
//
//	return 0;
//}
//{
//	int line = 0;
//	printf( "�������\n");
//	while (line < 5000)
//	{
//		line++;
//		printf("�ô���\n");
//	}
//	printf("��offer\n");
//	return 0;
//}