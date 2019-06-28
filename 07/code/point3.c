#include<stdio.h>

int main(void) {
	int ary[3];

	ary[0] = 3;
	ary[1] = 2;
	ary[2] = 1;

	printf("%d\n", *ary); // *ary=ary[0]
	printf("%d\n", *(ary + 1)); // *(ary+1)=ary[1]

	return 0;
}