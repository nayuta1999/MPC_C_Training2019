#include<stdio.h>

int main(void) {
	int a[6];

	for (int i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
		a[i] *= 3;           //a[i]=a[i]*3
	}

	for (int i = 5; i >= 0; i--) {
		printf("%d ", a[i]);
	}

	return 0;
}