#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

 void hanoi(int n, char a, char b, char c)       //�������a�����ϵ����ӽ���b�����ƶ���c����
   {  if (1 == n)                                //�����һ������ֱ�ӽ�a�����ϵ������ƶ���c
          {
	             printf("%c-->%c\n", a, c);
	           }
        else
            {
	              hanoi(n - 1, a, c, b);         //��a������n-1�����ӽ���c���ӣ��ƶ���b����
	              printf("%c-->%c\n", a, c);     //��ֱ�ӽ�a�����ϵ����һ�������ƶ���c
	              hanoi(n - 1, b, a, c);         //Ȼ��b�����ϵ�n-1�����ӽ���a�ƶ���c
	           }
   }
 int main()
   {  int  n;
       printf("Input the number of diskes:");
       scanf("%d", &n);
       hanoi(n, 'A', 'B', 'C');
       return 0;
   }


//int fb(int n)
//{
//	int a = 1, b = 1, c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fb(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int fb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fb(n-1)+fb(n-2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fb(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int my_strlen(char* str)//�õݹ鷨���ַ�������
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "12gfw";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
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