#include<stdio.h>

int main(){
	FILE* fp;
	char c;

	fp=fopen("test.txt","r");

	c=fgetc(fp);
	printf("%c\n",c);

	fclose(fp);

	return 0;
}