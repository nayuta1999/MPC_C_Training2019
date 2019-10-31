#include<stdio.h>

int main(){
	FILE* fp;
	char str[100][4];
	int i=0;

	fp=fopen("test.txt","r");

	for(i=0;i<3;i++){
		fgets(str[i],256,fp);
		printf("%s",str[i]);
	}

	fclose(fp);

	return 0;
}