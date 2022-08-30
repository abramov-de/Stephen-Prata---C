#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int alter(int * x, int * y);

int main(void) {
	int x, y;
	printf("Vvedite dva chisla:\n");
	scanf("%d %d", &x, &y);
	printf("Pervonachalno: x = %d, y = %d.\n", x, y);
	alter(&x, &y);
	printf("Teper: x = %d, y = %d.\n", x, y);
}

int alter(int * x, int * y) {
	int sum;
	int dif;
	sum = *x + *y;
	dif = *x - *y;
	*x = sum;
	*y = dif;
}