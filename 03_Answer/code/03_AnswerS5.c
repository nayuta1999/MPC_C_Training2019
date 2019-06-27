#include<stdio.h>

int main(void){
	int a;
	
	for(int i=0;i<20;i++){
		scanf("%d",&a);
		if(i%2==0){printf("%d ",a);}
	}
	
	return 0;
}