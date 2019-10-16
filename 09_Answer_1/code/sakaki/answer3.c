#include<stdio.h>

int str_len(char *str){
	int len=0;
	while(str[len++]!='\n'){}
	return len;
}

int main(void){
	char str[50];
	int i;
	int len;
	
	fgets(str,sizeof(str),stdin);
	
	len=str_len(str);
	
	for(i=0;i<len;i+=2){
		printf("%c",str[i]);
	}
	
	return 0;
}