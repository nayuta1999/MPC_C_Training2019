#include<stdio.h>

int main(void){
	int sum=0;
	int x,y;
	scanf("%d%d",&x,&y);
	
	for(int i=x;i<=y;i++){
		sum+=i;	//sum=sum+i‚ðˆÓ–¡‚·‚é.
	}
	
	printf("%d",sum);
	
	return 0;
}
