#include<stdio.h>

// プロトタイプ宣言
void func(int x, int y);

int main(void) {
	int x, y;

	printf("2つの整数を入力しよう\n");
	scanf("%d%d", &x, &y);

	func(x, y);

	printf("x = %d y = %d\n", x, y);

	return 0;
}

// 2つの変数の中身を入れ替える関数の予定
void func(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}