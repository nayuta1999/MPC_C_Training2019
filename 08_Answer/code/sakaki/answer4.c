#include<stdio.h>

int main(void){
	char str[40];
	int i;
	
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++){
		printf("%c",'a'<=str[i]&&str[i]<='z' ? str[i]-32:str[i]+32);
	}
	
	return 0;
}