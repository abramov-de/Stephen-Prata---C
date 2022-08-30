```c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void larger_of(double * a, double * b);

double main(void) {
	double x, y;
	printf("Eta programma zamenyaet oba chisla na bolshee iz nih.\n");
	printf("Vvedite dva chisla tipa DOUBLE:\n");
	scanf("%f %f", &x, &y);
	printf("Pervonachalno: x = %f, y = %f", x, y);
	larger_of(&x, &y);
	printf("Teper: x = %f, y = %f", x, y);
}

void larger_of(double * a, double * b) {
	double max;
	if (a > b)
		*b = *a;
	else
		*a = *b;
}
```