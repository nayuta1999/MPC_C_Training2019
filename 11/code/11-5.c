#include<stdio.h>

int main(){
	FILE* fp;
	char str[100];

	fp=fopen("test.txt","r");

	fscanf(fp,"%99s",str);
	printf("%s\n",str);

	fclose(fp);

	return 0;
}