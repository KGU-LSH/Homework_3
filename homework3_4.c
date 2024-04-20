#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y;
	printf("x : ");
	scanf("%d", &x);
	printf("y : ");
	scanf("%d", &y);
	printf("제%d사분면", (x > 0) ? (y > 0) ? 1 : 4 : (y < 0) ? 3 : 2);
}