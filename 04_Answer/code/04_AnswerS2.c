#include<stdio.h>

int main(void) {
	int a[10][10];

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			a[i][j] = i * j;
		}
	}

	for (int i = 1; i <= 9; i++) {
		if (i % 2 == 0) { continue; }
		for (int j = 1; j <= 9; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}