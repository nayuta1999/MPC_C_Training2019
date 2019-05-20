#include<stdio.h>

int main(void){
	int sum=0;
	int x,y;
	scanf("%d%d",&x,&y);
	
	for(int i=x;i<=y;i++){
		if(i%3==0){continue;}
		sum+=i;	//sum=sum+i.
	}
	/*
	for(int i=x;i<=y;i++){
		if(i%3==0){}
		else{
			sum+=i;    
		}
	}
	*/
	
	printf("%d",sum);
	
	return 0;
}
