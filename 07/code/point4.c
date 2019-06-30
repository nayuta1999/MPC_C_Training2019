#include<stdio.h>

int main(void) {
	int a[6] = { 5,7,3,4,2,8 };
	int i;
	int *p;
	p = a; //ポインタpに配列aの先頭要素のアドレスを代入

		   // pに(i*int型のサイズ)を足したアドレスに格納された値を出力
	for (i = 0; i<6; i++) {
		printf("%d ", *(p + i));
	}

	printf("\n");

	for (i = 0; i<6; i++) {
		printf("%d ", p[i]);
	}

	return 0;
}