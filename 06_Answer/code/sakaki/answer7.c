#include<stdio.h>

void PRINT(int n);


int main(void){
	int n;
	scanf("%d",&n);

	PRINT(n);
	
	return 0;
}

void PRINT(int n){
	int i;
	for(i=0;i<n;i++){
		printf("These maggots are rich in protein.\n");
	}
}