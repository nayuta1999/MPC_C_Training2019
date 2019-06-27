#include<stdio.h>

int func(int a, int b); //プロトタイプ宣言

int main(void) {
	int num = func(3, 5);

	printf("%d\n",num);
	return 0;
}

int func(int a, int b) {
	return a*b;
}