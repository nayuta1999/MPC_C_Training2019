#include<stdio.h>

int main(void){
	int sum=0;
	int x,y;
	scanf("%d%d",&x,&y);
	
	for(int i=x;i<=y;i++){
		if(i%3==0){continue;}
		sum+=i;	//sum=sum+iを意味する.
	}
	/*
	for(int i=x;i<=y;i++){
		if(i%3==0){}
		else{
			sum+=i;    //このように書いても良い。様々な書き方が存在する。
		}              //自分が理解しやすい書き方を探そう。
	}
	*/
	
	printf("%d",sum);
	
	return 0;
}