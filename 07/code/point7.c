#include<stdio.h>

int main(void) {
	int a[6] = { 5,7,3,4,2,8 };
	int i;

	for (i = 0; i<6; i++) {
		a[i] *= 2;
	}

	for (i = 0; i<6; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}