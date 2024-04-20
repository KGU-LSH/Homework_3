#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	int c;
	c = a;
	a = b;
	b = c;
	printf("¹Ù²Û ÈÄ : a = %d, b = %d", a, b);
}