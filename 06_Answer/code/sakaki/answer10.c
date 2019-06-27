#include<stdio.h>

#define N 9
#define INF 1000000

int DFS(int X,int Y,int Z,int n);
int MIN(int a,int b);
int ABS(int x);

int l[N],A,B,C;

int main(void){
	int i;
	
	scanf("%d%d%d",&A,&B,&C);
	for(i=0;i<N;i++){scanf("%d",&l[i]);}
	
	printf("answer=%d\n",DFS(0,0,0,0));
	
	return 0;
}

int DFS(int X,int Y,int Z,int depth){
	int NO_USE_POWER,SYNTHESIS_1,SYNTHESIS_2,SYNTHESIS_3;
	
	if(depth==N){
		if(X==0||Y==0||Z==0){return INF;}
		else{return (ABS(X-A)+ABS(Y-B)+ABS(Z-C)-30);}
	}
	
	NO_USE_POWER=DFS(X,Y,Z,depth+1);
	SYNTHESIS_1=DFS(X+l[depth],Y,Z,depth+1)+10;
	SYNTHESIS_2=DFS(X,Y+l[depth],Z,depth+1)+10;
	SYNTHESIS_3=DFS(X,Y,Z+l[depth],depth+1)+10;
	
	return (MIN(MIN(NO_USE_POWER,SYNTHESIS_1),MIN(SYNTHESIS_2,SYNTHESIS_3)));
}

int MIN(int a,int b){
	if(a<b){return a;}
	else{return b;}
}

int ABS(int x){
	if(x<0){return (-1*x);}
	else{return x;}
}