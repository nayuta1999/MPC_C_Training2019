#include<stdio.h>

int main(){
	FILE* fp;
	char str[100];

	fp=fopen("test.txt","r");

	fgets(str,256,fp);
	printf("%s\n",str);

	fclose(fp);

	return 0;
}