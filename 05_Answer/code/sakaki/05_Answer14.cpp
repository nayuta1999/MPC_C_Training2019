#include<stdio.h>

int main(void){
	int a[10];
	
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	for(int answer=0;;answer++){
		for(int i=0;i<10;i++){
			if(a[i]%2==1){
				printf("%d",answer);
				return 0;
			}
			a[i]/=2;
		}
	}
	
	return 0;
}