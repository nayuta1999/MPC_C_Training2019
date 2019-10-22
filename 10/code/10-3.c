#include<stdio.h>

typedef struct _player {
	int hp;
	int ap;
	int mp;
}player;

void damage(player *p);

int main() {
	player p1 = { 50,30,30 };

	printf("HP:%d AP:%d MP:%d\n", p1.hp, p1.ap, p1.mp);
	damage(&p1);
	printf("player に 40 のダメージ！\n");
	printf("HP:%d AP:%d MP:%d", p1.hp, p1.ap, p1.mp);
	return 0;
}

void damage(player *p) {
	p->hp -= 40;
}