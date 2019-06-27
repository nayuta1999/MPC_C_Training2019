#include<stdio.h>

int MAX(int a,int b);


int main(void){
	int a,b;
	scanf("%d%d",&a,&b);

	printf("%d",MAX(a,b));

	return 0;
}

int MAX(int a,int b){
	if(a<b){return b;}
	else{return a;}
		
}