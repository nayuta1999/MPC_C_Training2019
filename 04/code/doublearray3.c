#include<stdio.h>

int main(void) {
	int array[2][3];
	int i, j;

	printf("6 numbers put on please.\n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("array[%d][%d]", i, j, array[i][j]);
		}
	}
	return 0;
}