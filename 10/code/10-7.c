#include<stdio.h>
#include<math.h>

#define PI 3.14
#define VOLUME(r,h) r*h*PI //マクロは引数をとることもできる

int main() {
	int r = 3, h = 5;
	printf("%lf\n", PI);
	printf("%lf\n", VOLUME(r, h));
	return 0;
}