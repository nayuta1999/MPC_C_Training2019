#include<stdio.h>

void func(int x,int y);

int main(void) {
	int x = 3, y = 5;

	func(2, 4);

	func(x, y);

	return 0;
}

void func(int x,int y) {
	int sum,mul;

	sum = x + y;

	mul = x * y;


	printf(" sum=%d\n mul=%d\n",sum,mul);

}