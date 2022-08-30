#define _CRT_SECURE_NO_WARNINGS
/* Каталог для нескольких книг */
#include <stdio.h>
#define MAXTITL 40
#define MAXAULT 40
#define MAXBKS 100

struct book {
	char title[MAXTITL];
	char author[MAXAULT];
	float value;
};

int main(void) {
	struct book library[MAXBKS];
	int count = 0;
	int index;

	printf("Vvedite nazvanie knigi.\n");
	printf("Nazhmite [enter] v nachale stroki dlya vihoda iz programmi.\n");

	while (count < MAXBKS && gets(library[count].title) != NULL
		&& library[count].title[0] != '\0') {

		printf("Teper vvedite FIO avtora.\n");
		gets(library[count].author);
		printf("Teper vvedite tsenu knigi.\n");
		scanf("%f", &library[count++].value);

		while (getchar() != '\n')
			continue;

		if (count < MAXBKS)
			printf("Vvedite nazvanie sleduyuschei knigi.\n");
	}

	if (count > 0) {
		printf("Katalog vashih knig:\n");
		for (index = 0; index < count; index++)
			printf("%s ot %s: $%.2f\n", library[index].title,
				library[index].author, library[index].value);
	}
	else
		printf("Voobsche net knig? Ochen ploho.\n");

	return 0;
}