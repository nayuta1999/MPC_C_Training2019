//fopen,fclose等も stdio.hに含まれています
#include<stdio.h>

int main(){
	FILE* fp;

	fp=fopen("test.txt","w");
	fclose(fp);

	return 0;
}