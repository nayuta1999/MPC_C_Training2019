#include<stdio.h>

//プロトタイプ宣言
void func(int a[][2]); //int (*a)[2]でも良い

int main(){
	int a[2][2]={{3,4},{8,9}};
	int i,j; //ループカウンタ

	func(a);
	return 0;
}

/**********************
関数名:func関数
機能:配列内の値を表示する
**********************/
void func(int a[][2]){ //int (*a)[2]でも良い
	int i,j; //ループカウンタ

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n"); //こうすると綺麗に出力できる
	}
}