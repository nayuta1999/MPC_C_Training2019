#include<stdio.h>

void swap(int *a, int *b);

int main() {
	int ary[5] = { 9,3,4,1,7 }; //データ
	int i; //ループカウンタ
	int flag = 0;
	printf("ソート前\n");
	for (i = 0; i<5; i++) {
		printf("%d ", ary[i]);
	}
	printf("\n");


	do {
		flag = 0;
		for (i = 0; i<4; i++) {
			printf("%d", i);
			if (ary[i] < ary[i + 1]) { //配列の次の要素の値のほうが大きかったら(降順に並べる場合)
				swap(&ary[i], &ary[i + 1]);
				flag = 1;
				printf("aa");
			}
		}
	} while (flag == 1);

	printf("ソート後\n");
	for (i = 0; i<5; i++) {
		printf("%d ", ary[i]);
	}
	printf("\n");
	return 0;
}

void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}