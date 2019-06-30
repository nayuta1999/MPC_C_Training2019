#include<stdio.h>

// プロトタイプ宣言
void func(int *a);

int main(void) {
	int a[6] = { 5,6,3,4,2,8 };
	int i;

	func(a); //配列の先頭アドレスを実引数として与える

	for (i = 0; i<6; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}

// 配列の各要素を2倍にする関数
void func(int *a) {
	int i;
	for (i = 0; i<6; i++) {
		a[i] *= 2;
	}
}