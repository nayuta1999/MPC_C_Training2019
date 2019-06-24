#include<stdio.h>

int nine(void) {
	return 9;

}

int main(void) {
	int num = nine();

	printf("1 + 1 = %d\n", num);

	printf("num = %d\n", nine()); //そのままいれることも可能です
	return 0;
}