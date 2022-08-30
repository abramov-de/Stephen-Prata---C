/* Вложенная структура */
#include <stdio.h>
#define LEN 20

const char* msgs[5] = {
	"	Blagodaryu vas za chudesno provedenniy vecher, ",
	"Vi odnoznachno prodemonstriorovali, chto ",
	"yavlyaet soboy osobiy tip cheloveka. Mi obyazatelno dolzhni vstretitsya",
	"za voshititelnim uzhinom s ",
	" i veselo provesti vremya."
};

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
	struct guy fellow = {
		{ "Stephen", "King" },
		"zapechonniye omari",
		"personalniy trener",
		58112.00
	};

	printf("Dorogoy %s, \n\n", fellow.handle.first);
	printf("%s%s.\n", msgs[0], fellow.handle.first);
	printf("%s%s\n", msgs[1], fellow.job);
	printf("%s\n", msgs[2]);
	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
	if (fellow.income > 150000.0)
		puts("!!");
	else if (fellow.income > 75000.0)
		puts("!");
	else
		puts(".");
	printf("\n%40s%s\n", " ", "Do skoroy vstrechi,");
	printf("%40s%s\n", " ", "PUTIN");

	return 0;
}