#include<stdio.h>

//プロトタイプ宣言
int sum(int a, int b);

int main(void) {
	int a, b;

	printf("数字を2つ入力してください\n");
	scanf("%d %d", &a, &b);

	printf("%d\n", sum(a, b));
	return 0;
}

int sum(int a, int b) {
	return a + b;
}