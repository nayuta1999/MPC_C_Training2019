#include<stdio.h>

typedef enum _day {
	SUN,
	MON,
	TUE,
	WED,
	THU,
	FRI,
	SAT,
}day;

int main() {
	day d = SUN;
	if (d == SAT || d == SUN) {
		printf("休みだあああ");
	}
	else {
		printf("学校に行こう");
	}
	return 0;
}