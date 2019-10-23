#include<stdio.h>

#define A 3

#ifdef A           //Aがマクロ定義されている場合
#define B 5
#endif

#ifndef A          //Aがマクロ定義されていない場合
#define A 5
#define B 10
#endif
int main() {
	printf("%d\n", B);
	return 0;
}