#include<stdio.h>

int MAX(int a,int b);

int main(void){
	int x,y;
	scanf("%d%d",&x,&y);
	
	printf("%d\n",MAX(x,y));

	return 0;
}

int MAX(int a,int b){
	if(a<b){return b;}
	else{return a;}
}