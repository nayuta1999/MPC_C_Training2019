#include<stdio.h>

int main(void) {
	int array[2][3];

	array[0][0] = 1;
	array[0][1] = 2;
	array[0][2] = 3;
	array[1][0] = 4;
	array[1][1] = 5;
	array[1][2] = 6;
	
	printf("%d\n", array[1][1]);
}