#include<stdio.h>

int factorial(int x); //プロトタイプ宣言

int main(void) {

	printf("%d\n", factorial(10));//10!を計算します
	return 0;
}

int factorial(int x) {

	if (x > 1) {
		return x * factorial(x - 1);  //x*(x-1)!
	}
	else {
		return 1;
	}

}