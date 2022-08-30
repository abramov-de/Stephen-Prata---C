//sum_arr1.c -- сумма элементов массива

#include<stdio.h>
#define SIZE 10

int sum(int ar[], int n);

int main(void) {

	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;

	answer = sum(marbles, SIZE);
	printf("Obshchaya summa elementov massiva marbles ravna %ld.\n", answer);
	printf("Obieyom pamyati, otvedennoi pod massiv marbles, sostavlyaet %zd bayt.\n", sizeof marbles);

	return 0;
}

int sum(int ar[], int n) {		//каков размер массива?

	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i];
	printf("Razmer peremennoi ar sostavlyaet %zd bayt.\n", sizeof ar);

	return total;
}
