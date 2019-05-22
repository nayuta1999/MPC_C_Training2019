#include<stdio.h>

int main(void) {
	int matrix_a[2][2];
	int matrix_b[2][2];

	int matrix_answer[2][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &matrix_a[i][j]);
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &matrix_b[i][j]);
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			answer[i][j] = matrix_a[i][j] + matrix_b[i][j];
			printf("%d ", matrix_answer[i][j]);
		}
		printf("\n");
	}

	return 0;
}