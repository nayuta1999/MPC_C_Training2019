#include<stdio.h>

int MULTIPLICATION(int x,int y);

int main(void){
	
	int x,y;
	scanf("%d%d",&x,&y);
	
	printf("%d\n",MULTIPLICATION(x,y));

	return 0;
}

int MULTIPLICATION(int x,int y){
	return x*y;
}