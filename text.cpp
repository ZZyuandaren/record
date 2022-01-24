#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include"add.h"
int main()
{
	int a = 23;
	int b = 54;
	int ret= Add(a, b);
	printf("%d", ret);
	return 0;
}