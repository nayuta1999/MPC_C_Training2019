#include<stdio.h>

int main(void){
	int a,b;
	scanf("%d%d",&a,&b);

	if(a<b&&(100<b||a<100)){
		printf("チャイナ\n");
	}
	else if(a==b&&(a==100||b==100)){
		printf("もっちゃん\n");
	}
	else if(a>b&&(a<100||b<100)){
		printf("ロブジェ\n");
	}
	else{
		printf("SAINO\n");
	}
	
	return 0;
}
