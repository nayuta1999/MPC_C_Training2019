#include<stdio.h>
#include<string.h>

int main(){
	char str[12]="Yeah!";

	//文字列の長さを返す関数strlen
	printf("%d\n",strlen(str));

	//文字列を連結する関数strcat
	strcat(str,"aaa!!!");
	printf("%s\n",str);
	return 0;
}