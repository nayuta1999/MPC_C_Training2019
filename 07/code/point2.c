#include<stdio.h>

int main(void) {
	int a;
	int *p; //ポインタ型変数の宣言
	a = 3;

	// aのアドレスをpoiに代入
	p = &a;

	/*  aのアドレスが入ったpoiのポインタということは
	aの値が表示されるはず？ */

	printf("%d\n", *p);

	return 0;
}