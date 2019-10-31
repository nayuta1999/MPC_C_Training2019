#include<stdio.h>

int main(){
	FILE* fp;

	fp=fopen("test.txt","w");

	fputc('c',fp);

	fclose(fp);

	return 0;
}