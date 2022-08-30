/* Использование указателя на структуру */
#include <stdio.h>
#define LEN 20

struct names {
	char first[LEN];
	char last[LEN];
};

struct guy {
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main(void) {
	struct guy fellow[2] = {
		{{ "Stephen", "King" },
		"zapechenniye omari",
		"personalniy trener",
		58112.00
		},
		{{ "Rodny", "Stuart" },
		"ribnoye frikase",
		"redaktor tabloida",
		232400.00
		}
	};
	struct guy* him;
	printf("adres #1: %p #2: %p\n", &fellow[0], &fellow[11]);
	him = &fellow[0];
	printf("ukazatel #1: %p #2: %p\n", him, him + 1);
	printf("him -> income ravno $%.2f: (*him).income ravno $%.2f\n", him -> income, (*him).income);
	him++;
	printf("him -> favfood ravno %s: him -> handle.last ravno %s:\n", him->favfood, him->handle.last);

	return 0;
}