#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double min(double, double);

double main(void) {
	double x, y;

	printf("Введите два числа типа double (или q для завершения программы):\n");
	while (scanf("%f %f", &x, &y) == 2) {
		printf("Меньшим из двух чисел %f и %f является %f.\n", x, y, min(x, y));
		printf("Введите два числа типа double (или q для завершения программы):\n");
	}
	printf("Программа завершена.\n");

	return 0;
}

double min(double a, double b) {
	double min;
	if (a < b)
		min = a;
	else
		min = b;
	return min;
}