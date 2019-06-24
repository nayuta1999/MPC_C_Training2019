#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.14159265


int main(void) {
	int num, i;
	double x;

	//
	srand(334);

	printf("randam\n");
	for (i = 0; i < 5; i++) {
		num = rand();
		printf("%d\n", num);
	}

	printf("%d\n", rand());//このようにprintf()の中に書くこともできる

	//
	printf("ランダムゾーン math.h");
	x = cos(PI / 3);
	printf("%lf\n", x);

	x = pow(2, 4);
	printf("%lf\n", x);

	abort();
	return 0;
}
