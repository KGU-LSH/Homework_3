#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y;
	printf("x : ");
	scanf("%d", &x);
	printf("y : ");
	scanf("%d", &y);
	printf("��%d��и�", (x > 0) ? (y > 0) ? 1 : 4 : (y < 0) ? 3 : 2);
}