#define _CRT_SECURE_NO_WARNINGS
/* Каталог для одной книги */
#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void) {
	struct book library;

	printf("Vvedite nazvanie knigi.\n");
	gets(library.title);
	printf("Teper vvedite FIO avtora.\n");
	gets(library.author);
	printf("Teper vvedite tsenu.\n");
	scanf("%f", &library.value);
	printf("%s ot %s: $%.2f\n", library.title, 
		library.author, library.value);
	printf("%s: \"%s\" ($%.2f)\n", library.author,
		library.title, library.value);
	printf("Gotovo.\n");

	return 0;
}