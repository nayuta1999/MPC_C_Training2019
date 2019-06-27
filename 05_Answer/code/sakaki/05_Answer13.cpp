#include<stdio.h>

int main(void){
	int X;
	scanf("%d",&X);
	
	for(int i=111;i<=999;i+=111){
		if(X<=i){
			printf("%d",i-X);
			return 0;
		}
	}
	
	return 0;
}