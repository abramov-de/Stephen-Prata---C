#define _CRT_SECURE_NO_WARNINGS
/* Динамически распределенный массив */
#include<stdio.h>
#include<stdlib.h>

int main(void) {

	double * ptd;
	int max;
	int number;
	int i = 0;

	puts("Vvedite maximalnoe kolichestvo elementov tipa double.");
	scanf("%d", &max);
	ptd = (double*)malloc(max * sizeof(double));

	if (ptd == NULL) {
		puts("Ne udalos raspredelit pamyat. Avariiynoe zavershenie.");
		exit(EXIT_FAILURE);
	}

	/* ptd теперь указывает на массив элементов max */
	puts("Vvedite znacheniya (q dlya vihoda iz programmi) :");

	while (i < max && scanf("%lf", &ptd[i] == 1))
		++i;

	printf("Vvedeno %d elementov:\n", number = i);

	for (i = 0; i < number; i++) {
		printf("%7.2f", ptd[i]);

		if (i % 7 == 6)
			putchar('\n');
	}

	if (i % 7 != 0)
		putchar('\n');

	puts("Programma zavershena.");
	free(ptd);

	return 0;
}