#include<stdio.h>

//構造体
typedef struct kozotai {
	char *name;
	int age;
	char *job;
}person2;

//構造体の初期化
person2 init(char *name, int age, char *job) {
	person2 x;
	x.name = name;
	x.age = age;
	x.job = job;

	return x;
}

int main() {
	//実体を生成し同時に構造体を初期化する
	person2 abc = { "abc",25,"student" };

	printf("%sは%d歳で%sをしています", abc.name, abc.age, abc.job);

	return 0;
}
