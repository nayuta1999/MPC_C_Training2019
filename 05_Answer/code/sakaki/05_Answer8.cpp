#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	
	int a[100];
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=a[0];
	int max=a[0];
	
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
		if(max<a[i]){
			max=a[i];
		}
	}
	
	printf("min=%d,max=%d.\n",min,max);
	
	return 0;
}