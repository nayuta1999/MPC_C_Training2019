#include<stdio.h>

int main(void){
	int a[7];
	
	for(int i=0;i<7;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<7;i++){
		a[i]*=2;
	}
	
	for(int i=0;i<7;i++){
		printf("%d\n",a[i]);
	}
	
	
	return 0;
}