#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double harmonic_mean(double a, double b);

int main(void) {
	double x, y;
	printf("Vvedite dva tselih chisla:\n");
	scanf("%f %f", &x, &y);
	printf("Srednim garmonicheskim dvuh chisel %f i %f yavlyaetsya %f", x, y, harmonic_mean(x, y));

	return 0;
}

double harmonic_mean(double a, double b) {
	double arithmetic_mean;
	double ans;
	arithmetic_mean = ((1 / a + 1 / b) / 2);
	ans = 1 / arithmetic_mean;
	return ans;
}