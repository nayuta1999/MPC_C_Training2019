#include<stdio.h>

int main(void) {
	int i;
	int array[] = { 5,6,7 };

	for (i = 0; i < 3; i++)
	{
		printf("array[%d]=%d\n", i, array[i]);
	}

	return 0;
}