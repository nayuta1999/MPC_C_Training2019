#include<stdio.h>

int main(void) {
	int i;
	int array[5] ;

	printf("5 numbers put on please\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &array[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("array[%d]=%d", i, array[i]);
	}


	return 0;
}