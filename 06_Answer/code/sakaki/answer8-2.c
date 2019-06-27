#include<stdio.h>

int FUCTORIAL(int n);

int main(void){
	int n;
	scanf("%d",&n);

	printf("%d",FUCTORIAL(n));
	
	return 0;
}

int FUCTORIAL(int n){
	if(n==1){return 1;}
	else{return n*FUCTORIAL(n-1);}
}