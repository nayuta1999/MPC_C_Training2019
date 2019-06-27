#include<stdio.h>

//グローバル変数
int num;

void func(void);

int main(void) {
	num = 23;

	//代入したい
	func();
	printf("%d\n", num);

	return 0;
}

void func(void) {
	num = 34;
}