#include<stdio.h>

int main(void) {
	int hensu1 = 2;
	int hensu2 = 2;

	printf("hensu1の値 : %d\n", hensu1);
	printf("アドレス : %p\n", &hensu1); //%pはアドレスを確認するためのフォーマット指定子

	printf("hensu2の値 : %d\n", hensu2);
	printf("アドレス : %p\n", &hensu2);

	return 0;
}