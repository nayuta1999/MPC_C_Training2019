#include<stdio.h>

#define A 3

#if A==3
#define B 5
#elif A==6         //else if
#define B 10
#else
#define B 1
#endif

int main() {
	printf("%d\n", B);
	return 0;
}