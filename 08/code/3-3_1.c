#include<stdio.h>

int main(){
	char str[6]="Yeah!";
	int i;

	for(i=5;i>=0;i--){
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}