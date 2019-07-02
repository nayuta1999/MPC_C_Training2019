#include<stdio.h>

int prime_number(int x){
	int i;
	if(x==1){return 0;}
	
	for(i=2;i*i<=x;i++){
		if(x%i==0){return 0;}
	}
	
	return 1;
}

void PRINT(int n){
	int i;
	for(i=1;i<=n;i++){
		if(prime_number(i)){printf("%d is Prime number!!\n",i);}
		else{printf("Oh... %d is not Prime number...\n",i);}
	}
}

int main(void){
	int n;
	scanf("%d",&n);
	
	PRINT(n);
	
	return 0;
}