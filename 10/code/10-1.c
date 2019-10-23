#include<stdio.h>

struct _player {  //このときの構造体タグ名は-player
	int hp;      //このときのhp,mpなどの各要素は構造体メンバという
	int ap;
	int mp;
};

int main() {
	struct _player p1 = { 50,30,30 }; //こんな感じでまとめて代入ができる 

					 /*
					　以下のように1つずつ代入することも可能です。
					  p1.hp=50;
					  p1.ap=30;
					  p1.mp=30;
					 */

	//このように 構造体変数名(p1).要素名(hp等) とすると構造体の要素を指定することが出来ます。
	printf("HP:%d AP:%d MP:%d", p1.hp, p1.ap, p1.mp);
	return 0;
}
