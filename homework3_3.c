#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, d, e;
	printf("���� ����� : ");
	scanf("%d", &a);
	printf("���� ����� : ");
	scanf("%d", &b);
	printf("���� ����� : ");
	scanf("%d", &c);
	printf("Ž�� ����� : ");
	scanf("%d", &d);
	printf("�ѱ��� ��� : ");
	scanf("%d", &e);
	int min = (e > 5) ? 1 : 0;
	printf("%.2f", (a * 0.3) + (b * 0.35) + (c * 0.2) + (d * 0.15) - min);
	return 0;
}