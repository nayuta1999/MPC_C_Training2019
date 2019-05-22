#include<stdio.h>

int main(void) {
	int a[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int answer = 1;

	for (int i = 0; i < 10; i++) {
		answer *= a[i];
	}

	printf("%d", answer);

	return 0;
}