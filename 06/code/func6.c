#include<stdio.h>

int total(int num) {
	int sum = 0;
	int i;
	for (i = 0; i <= num; i++) {
		sum += i;
	}
	return sum;
}

int main(void) {
	int N = 5;

	printf("1から%dまでの合計は%dです\n", N, total(N));

	return 0;
}