#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	
	int a[100][100];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int sum=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	
	printf("sum=%d",sum);
	
	return 0;
}