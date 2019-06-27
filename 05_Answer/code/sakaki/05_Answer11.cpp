#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	
	int a[100];
	int flag=0;
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	do{
		flag=0;
		for(int i=1;i<n;i++){
			if(a[i-1]<a[i]){
				int tmp=a[i-1];
				a[i-1]=a[i];
				a[i]=tmp;
				flag=1;
			}
		}
	}while(flag);
	
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}