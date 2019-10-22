#include<stdio.h>

typedef struct _player {
	int hp;
	int ap;
	int mp;
}player; //これらを player という型にする。

int main() {
	player p1 = { 50,30,30 }; //スッキリした形に

	printf("HP:%d AP:%d MP:%d", p1.hp, p1.ap, p1.mp);
	return 0;
}