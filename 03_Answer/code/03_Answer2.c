#include<stdio.h>

int main(void){
	int sum=0;
	
	for(int i=1;i<=200;i++){
		sum+=i;	//sum=sum+i
	}
	
	printf("%d",sum);
	
	return 0;
}
