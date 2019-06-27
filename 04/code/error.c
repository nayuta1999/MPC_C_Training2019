#include<stdio.h>

int main(void) {
	int i;
	int array[3];
	array = {4,5,6} //error
	array[3] = { 4,5,6 } //error


	for (i = 0; i < 3; i++)
	{
		printf("array[%d]=%d\n", i, array[i]);
	}

	return 0;
}