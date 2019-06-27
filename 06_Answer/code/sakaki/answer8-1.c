#include<stdio.h>

int FUCTORIAL(int n);

int main(void){
	int n;
	scanf("%d",&n);

	printf("%d",FUCTORIAL(n));
	
	return 0;
}

int FUCTORIAL(int n){
	int i;
	int ans=1;
	for(i=n;i>0;i--){
		ans*=i;
	}
	return ans;
}