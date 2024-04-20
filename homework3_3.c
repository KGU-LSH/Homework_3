#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d, e;
	printf("국어 백분위 : ");
	scanf("%d", &a);
	printf("수학 백분위 : ");
	scanf("%d", &b);
	printf("영어 백분위 : ");
	scanf("%d", &c);
	printf("탐구 백분위 : ");
	scanf("%d", &d);
	printf("한국사 등급 : ");
	scanf("%d", &e);
	int min = (e > 5) ? 1 : 0;
	printf("%.2f", (a * 0.3) + (b * 0.35) + (c * 0.2) + (d * 0.15) - min);
	return 0;
}