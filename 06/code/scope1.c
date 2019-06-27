#include<stdio.h>

void func(void);

int main(void) {
	int num = 4;

	//代入希望
	func();

	printf("%d\n",num);
	return 0;
}

void func(void) {
	num = 33;
}