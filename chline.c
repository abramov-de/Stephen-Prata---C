#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void chline(char ch, int a, int b);

int main(void) {
	int i, j;
	char ch;
	printf("Введите количество строк и столбцов:\n");
	scanf("%d %d", &i, &j);
	printf("Введите символ:\n");
	getchar();
	ch = getchar();
	chline(ch, i, j);
}

void chline(ch, a, b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%c", ch);
		}
		putchar('\n');
	}
}