#include<stdio.h>

int main(void){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);

	int min_number,max_number;
	min_number=a;
	max_number=a;

	if(min_number>b){
		min_number=b;
	}
	if(min_number>c){
		min_number=c;
	}
	if(min_number>d){
		min_number=d;
	}

	if(max_number<b){
		max_number=b;
	}
	if(max_number<c){
		max_number=c;
	}
	if(max_number<d){
		max_number=d;
	}

	printf("最大値%d\n",max_number);
	printf("最小値%d\n",min_number);
	
	return 0;
}
