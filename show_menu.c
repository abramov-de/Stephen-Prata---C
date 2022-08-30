```c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void showmenu(void);
int getchoice(int, int);

main() {
	int res;
	showmenu();
	while ((res = getchoice(1, 4)) != 4)
		printf("Menya ustraivaet variant %d.\n", res);
	printf("Do svidaniya!\n");

	return 0;
}

void shwmenu(void) {
	printf("Pozhaluista, viberite odin iz sleduyuschih variantov:\n");
	printf("1) kopirovaniye failov		2) peremescheniye failov\n");
	printf("3) udaleniye failov			4) vihod\n");
	printf("Vvedite nomer  vibrannogo varianta:\n");
}

int getchoice(int low, int high) {
	int ans;
	scanf("%d", &ans);
	while (ans < low || ans > high) {
		printf("%d nedopustimiy variant; povtorite popitku\n", ans);
		showmenu();
		scanf("%d", &ans);
	}
	return ans;
}
```