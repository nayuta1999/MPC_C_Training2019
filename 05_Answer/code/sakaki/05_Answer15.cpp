#include<stdio.h>

int main(void){
	int a[300];
	int n;
	int flag=0;
	scanf("%d",&n);
	
	for(int i=0;i<3*n;i++){
		scanf("%d",&a[i]);
	}
	
	do{
		flag=0;
		for(int i=1;i<3*n;i++){
			if(a[i-1]>a[i]){
				int tmp=a[i-1];
				a[i-1]=a[i];
				a[i]=tmp;
				flag=1;
			}
		}
	}while(flag==1);
	
	printf("\n");
	
	printf("MAX=%d,MIN=%d",a[3*n-2],a[1]);
	
	return 0;
}