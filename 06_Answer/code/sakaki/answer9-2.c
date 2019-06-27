#include<stdio.h>

int GCD(int a,int b);

int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	
	printf("%d",GCD(a,b));

	return 0;
}

int GCD(int a,int b){
	if(a%b==0){return b;}
	else{return GCD(b,a%b);}
}