#include <stdio.h>
struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "C���Գ������",55};
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 35;
	printf("�۸�gaiwei��%dԪ\n", b1.price);
	return 0;
}
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