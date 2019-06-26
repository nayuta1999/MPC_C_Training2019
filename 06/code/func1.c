#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.14159265


int main(void) {
	int num, i;
	double x;

	//データを渡すことのできる関数の例
	srand(334);

	
	printf("乱数ゾーン/n");
	for (i = 0; i < 5; i++) {
		num = rand();
		printf("%d\n", num);
	}

	printf("%d\n", rand());//このようにprintf()の中に書くこともできる

	//データを渡してその結果を受け取ることができる関数の例
	printf("math.hの関数を使ってみよう");
	x = cos(PI / 3);
	printf("%lf\n", x);

	x = pow(2, 4);　//このように2つ引数を与えるものもあります
	printf("%lf\n", x);

	abort();
	return 0;
}
