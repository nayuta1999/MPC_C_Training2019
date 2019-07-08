#include<stdio.h>
#include<string.h>

int main(){
	char str[6]="Yeah!";

	printf("%d\n",str[0]); //こんな感じで確認ができる
	printf("%d\n",'!'); //記号にもASCIIコードがある

	//大文字小文字の判定もできる
	if('a'<=str[1]&&str[1]<'z'){
		printf("%cは小文字です\n",str[1]);
	}else if('A'<=str[1]&&str[1]<='Z'){
		printf("%cは大文字です\n",str[1]);
	}else{
		printf("入力された文字はアルファベットではありません\n");
	}
	return 0;
}