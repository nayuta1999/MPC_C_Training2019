#include<stdio.h>

int main(){
	char str[6];

	printf("文字列を入力してください\n");
	fgets(str,sizeof(str),stdin);

	printf("str=%s",str);
	printf("今の場合 5文字以上入力していないときには、改行も文字列に含まれます。\n");
	return 0;
}