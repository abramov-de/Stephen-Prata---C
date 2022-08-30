```c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int maximum(int a, int b, int c);

int main(void) {
	int x, y, z;
	printf("Vvedite tri tselih chisla:\n");
	scanf("%d %d %d", &x, &y, &z);
	printf("Naibolshee iz trex chisel %d, %d, %d - eto %d", x, y, z, maximum(x, y, z));
}

int maximum(int a, int b, int c) {
	int max;
	if (a >= b && a >= c)
		max = a;
	else if (b >= a && b >= c)
		max = b;
	else if (c >= a && c >= b)
		max = c;
	return max;
}
```