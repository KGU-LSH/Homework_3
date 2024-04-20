#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d", &a);
	printf("X\n");
	scanf("%d", &b);
	printf("=\n");
	scanf("%d", &c);
	(a * b == c) ? printf("Success!") : printf("Failure!");
}