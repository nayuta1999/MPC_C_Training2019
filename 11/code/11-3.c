#include <stdio.h>

int main(){
	FILE* fp;

	fp=fopen("test.txt","w");

	fprintf(fp,"Hello World! %d",2019);

	fclose(fp);

	return 0;
}