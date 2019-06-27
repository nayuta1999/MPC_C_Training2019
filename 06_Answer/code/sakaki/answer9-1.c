#include<stdio.h>

int GCD(int a,int b);

int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	
	printf("%d",GCD(a,b));

	return 0;
}

int GCD(int a,int b){
	int r=a%b;
	
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	
	return b;
}