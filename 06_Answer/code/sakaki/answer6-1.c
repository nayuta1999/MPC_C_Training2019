#include<stdio.h>

int MAX();

int a,b;

int main(void){
	scanf("%d%d",&a,&b);

	printf("%d",MAX());

	return 0;
}

int MAX(){
	if(a<b){return b;}
	else{return a;}
		
}