#include<stdio.h>

int main(void) {
	int N, i;
	int sum = 0;

	printf("数字を入力してください\n");
	scanf("%d", &N);

	for (i = 0; i <= N; i++) {
		sum += i;
	}
	printf("1から%dまでの合計は%dです\n", N, sum);

	return 0;
}