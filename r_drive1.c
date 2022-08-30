#define _CRT_SECURE_NO_WARNINGS
/*Тестирование функций rand1() и srand1()*/
/*Компилируется с файлом s_and_r.c*/
#include<stdio.h>

extern void srand1(unsigned int x);
extern int rand1(void);

int main(void) {

	int count;
	unsigned seed;
	printf("Vvedite nachalnoe chislo.\n");

	while (scanf("%u", &seed) == 1) {
		srand1(seed);
		for (count = 0; count < 5; count++)
			printf("%hd\n", rand1());
		printf("Vvedite sleduyuchee nachalnoe chislo (ili q dlya zaversheniya): \n");
	}

	printf("Programma zavershena.\n");

	return 0;
}